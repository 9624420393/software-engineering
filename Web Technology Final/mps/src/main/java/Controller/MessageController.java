package Controller;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import model.Message;
import DAOClass.MessageDao;

/**
 * Servlet implementation class MessageController
 */
@WebServlet("/MessageController")
public class MessageController extends HttpServlet {
	private static final long serialVersionUID = 1L;
	private MessageDao messageDao;

    public void init() {
        messageDao = new MessageDao();
    }

	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
		String from = request.getParameter("from");
        String to = request.getParameter("to");
        String msg = request.getParameter("msg");
        int uid = Integer.parseInt(request.getParameter("uid"));

        Message message = new Message();
        message.setFrom(from);
        message.setTo(to);
        message.setMsg(msg);
        message.setUid(uid);

        try {
            messageDao.addMessage(message);
            RequestDispatcher dispatcher = request.getRequestDispatcher("MessageView.jsp");
            dispatcher.forward(request, response);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}


