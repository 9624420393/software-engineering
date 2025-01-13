
    <%@ page import="java.sql.*" %>  
    <%  
    String name=request.getParameter("val");  
    if(name==null||name.trim().equals(""))
    {  
    	out.print("<p>Please enter Email!</p>");  
    }
    else
    {  
    	try
    	{  
    		Class.forName("com.mysql.jdbc.Driver");
    		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/advance1","root","");  
    		PreparedStatement pst=con.prepareStatement("select * from student1 where email=?");  
    		pst.setString(1, name);
    		ResultSet rs=pst.executeQuery();  
      		while(rs.next()) 
      		{      
     			out.println("<p>Email Id Already Used</p>");   
    		}
      		
    		con.close();  
    	}
    	catch(Exception e)
    	{
    		out.print(e);
    	}  
    }  
    %>  