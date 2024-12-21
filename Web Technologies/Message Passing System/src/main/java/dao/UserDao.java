package dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import connection.DBconnection;
import model.User;

public class UserDao {
	
		public static void statuschange(String email,User u) {
			try {
				Connection conn = DBconnection.driverConnection();
				String sql = "update user set status ='complete' where email=?" ;
				PreparedStatement pst = conn.prepareStatement(sql);
				pst.setString(1, email);
				pst.executeUpdate();
				System.out.println("complete");
			} catch (Exception e) {
				e.printStackTrace();
				// TODO: handle exception
			}

		}

		public static boolean checkEmail(String email) {
			boolean flag= false;
			try {
				Connection conn = DBconnection.driverConnection();
				String sql = "select * from user where email =? and status='complete'";
				PreparedStatement pst = conn.prepareStatement(sql);
				pst.setString(1,email);
				ResultSet rs = pst.executeQuery();
				if (rs.next()) {
					flag = true;
				}
			} catch (Exception e) {
				e.printStackTrace();
				// TODO: handle exception
			}
			return flag;
		}
	public static void register(User u) {
		try {
			Connection conn = DBconnection.driverConnection();
			String sql = "insert into user(fname,lname,email,mobile,gender,password,status)values(?,?,?,?,?,?,?)";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, u.getFname());
			pst.setString(2, u.getLname());
			pst.setString(3, u.getEmail());
			pst.setLong(4,u.getMobile());
			pst.setString(5, u.getGender());
			pst.setString(6,u.getPassword());
			pst.setString(7, u.getStatus());
			pst.executeUpdate();
			System.out.println("Register");
		} catch (Exception e) {
			e.printStackTrace();
			// TODO: handle exception
		}

	}
	public static User login(User u) {
		User u1=null;
		try {
			Connection conn = DBconnection.driverConnection();
			String sql = "select * from user where email=? and password=?";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1,u.getEmail());
			pst.setString(2, u.getPassword());
			ResultSet rs=pst.executeQuery();
			if(rs.next()) {
				u1= new User();
				u1.setId(rs.getInt("id"));
				u1.setFname(rs.getString("fname"));
				u1.setLname(rs.getString("lname"));
				u1.setEmail(rs.getString("email"));
				u1.setMobile(rs.getLong("mobile"));
				u1.setGender(rs.getString("gender"));
				u1.setPassword(rs.getString("password"));
			
		    } 
		}
		catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		return u1;
	}
	public static boolean passwordcheck(int id,String oldpass) {
		boolean flag= false;
		try {
			Connection conn = DBconnection.driverConnection();
			String sql = "select * from user where id=? and password=?";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setInt(1, id);
			pst.setString(2, oldpass);
			ResultSet rs = pst.executeQuery();
			if (rs.next()) {
				flag = true;
			}
			
		} catch (Exception e) {
			e.printStackTrace();
			// TODO: handle exception
		}
		return flag;
	}
	public static void updatepassword(int id,String newpass) {
		try {
			Connection conn = DBconnection.driverConnection();
			String sql = "update user set password=? where id=?";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, newpass);
			pst.setInt(2, id);
			pst.executeUpdate();
			System.out.println("pass update");
		} catch (Exception e) {
			e.printStackTrace();
			// TODO: handle exception
		}
	}
	public static void changepassword(String email,String newpass) {
		try {
			Connection conn = DBconnection.driverConnection();
			String sql = "update user set password=? where email=?";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, newpass);
			pst.setString(2, email);
			pst.executeUpdate();
			System.out.println("pass change");
		} catch (Exception e) {
			e.printStackTrace();
			// TODO: handle exception
		}
	}
}
