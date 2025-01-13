package controller;

import java.io.IOException;
import java.util.Random;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import service.serviceOTP;
import dao.UserDao;
import model.User;
/**
 * Servlet implementation class usercontroller
 */
@WebServlet("/usercontroller")
public class usercontroller extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public usercontroller() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
		String action = request.getParameter("action");
		if (action.equalsIgnoreCase("Register")) {
		    User u= new User();
			u.setFname(request.getParameter("fname"));
			u.setLname(request.getParameter("lname"));
			u.setEmail(request.getParameter("email"));
			u.setMobile(Long.parseLong(request.getParameter("mobile")));
			u.setGender(request.getParameter("gender"));
			u.setPassword(request.getParameter("password"));
		
			System.out.println(u);
			u.setStatus("pending");
			String password = request.getParameter("password");
			String cpassword = request.getParameter("cpassword");
			String email = request.getParameter("email");
			boolean flag = UserDao.checkEmail(email);
			System.out.println(u);
			if (password.equals(cpassword)) {
				if (flag == false) {
					UserDao.register(u);
					Random r = new Random();
					int num = r.nextInt(9999);
					serviceOTP s = new serviceOTP();
					s.sendMail(email, num);
					request.setAttribute("email", email);
					request.setAttribute("otp", num);
					request.getRequestDispatcher("otp_page.jsp").forward(request, response);
				}
				else {
					request.setAttribute("msg1", "Email AllReady Registered");
					request.getRequestDispatcher("Register.jsp").forward(request, response);
				}
			} 
			else {
				request.setAttribute("msg", "password & confirm password not match");
				request.getRequestDispatcher("Register.jsp").forward(request, response);
			}
		} 
	else if (action.equalsIgnoreCase("verify")) {
		String email = request.getParameter("email");
		int otp1 = Integer.parseInt(request.getParameter("otp1"));
		int otp2 = Integer.parseInt(request.getParameter("otp2"));
		if (otp1 == otp2) {
			User u1 = new User();
			u1.setEmail(request.getParameter("email"));
			u1.setStatus("complete");
			UserDao.statuschange(email, u1);
			response.sendRedirect("login.jsp");
		}
		else {
			request.setAttribute("email", email);
			request.setAttribute("otp", otp1);
			request.setAttribute("msg1", "OTP NOT MATCH");
			request.getRequestDispatcher("otp_page.jsp").forward(request, response);
		}
	  }
	else if (action.equalsIgnoreCase("login")) {
		User u = new User();
		u.setEmail(request.getParameter("email"));
		u.setPassword(request.getParameter("password"));
		System.out.println(u);
		String email = request.getParameter("email");
		boolean flag = UserDao.checkEmail(email);
		if (flag == true) {
			User u1 = UserDao.login(u);
			if (u1 != null) {
				HttpSession session = request.getSession();
				session.setAttribute("data", u1);
				request.getRequestDispatcher("profile.jsp").forward(request, response);
			} else {
				request.setAttribute("msg", "Password Is Incorrect");
				request.getRequestDispatcher("login.jsp").forward(request, response);
			}

		} else {
			request.setAttribute("msg1", "Account Not Register");
			request.getRequestDispatcher("login.jsp").forward(request, response);
		}

	} else if (action.equalsIgnoreCase("Change password")) {
		int id = Integer.parseInt(request.getParameter("id"));
		String oldpass = request.getParameter("oldpass");
		boolean flag = UserDao.passwordcheck(id, oldpass);
		String newpass = request.getParameter("newpass");
		String cpd = request.getParameter("cpd");
		if (flag == true) {
			if (newpass.equals(cpd)) {
				UserDao.updatepassword(id, newpass);
				HttpSession session = request.getSession();
				response.sendRedirect("login.jsp");

			} 
			else {
				request.setAttribute("msg", "New password & confirm password not match");
				request.getRequestDispatcher("Changepass.jsp").forward(request, response);
			}
		} 
		else {
			request.setAttribute("msg1", "old password Incorrect");
			request.getRequestDispatcher("Changepass.jsp").forward(request, response);
			System.out.println("old password Incorrect");
		}

	}
	else if (action.equalsIgnoreCase("Forgot password")) {
		String email = request.getParameter("email");
		boolean flag = UserDao.checkEmail(email);
		if (flag == true) {
			User u = new User();
			Random r=new Random();
			int num = r.nextInt(9999);
			serviceOTP s = new serviceOTP();
			s.sendMail(email, num);
			request.setAttribute("email", email);
			request.setAttribute("otp", num);
			request.getRequestDispatcher("forgot-pass-otp.jsp").forward(request, response);
		}
		else {
			request.setAttribute("msg1", "Account Not Register");
			request.getRequestDispatcher("forgot-pass.jsp").forward(request, response);
		}
	}
	else if (action.equalsIgnoreCase("verify otp")) {
		String email = request.getParameter("email");
		int otp1 = Integer.parseInt(request.getParameter("otp1"));
		int otp2 = Integer.parseInt(request.getParameter("otp2"));
		if (otp1 == otp2) {
			request.setAttribute("email", email);
			request.setAttribute("otp", otp1);
			request.getRequestDispatcher("new-pass.jsp").forward(request, response);
		}
		else {
			request.setAttribute("email", email);
			request.setAttribute("otp", otp1);
			request.setAttribute("msg1", "OTP NOT MATCH");
			request.getRequestDispatcher("forgot-pass-otp.jsp").forward(request, response);
		}
	}
	else if (action.equalsIgnoreCase("new password")) {
		String email = request.getParameter("email");
		String npass = request.getParameter("npass");
		String cpd = request.getParameter("cpd");
		if (npass.equals(cpd)) {
			UserDao.changepassword(email, npass);
			response.sendRedirect("login.jsp");
		}
		else {
			request.setAttribute("msg", "New password & confirm password not match");
			request.getRequestDispatcher("new-pass.jsp").forward(request, response);
		}
	}
}
	}
	

	

