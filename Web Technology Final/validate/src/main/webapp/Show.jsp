<%@page import="dao.StudentDao"%>
<%@page import="bean.studentbean"%>
<%@page import="java.util.List"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<title>Bootstrap Example</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>
</head>
<body>
<%
	List<studentbean> list = StudentDao.getAllData();
%>
<div class="container">
  <h2>Table</h2>
             
  <table class="table table-condensed">
    <thead>
      <tr>
      	<th>ID</th>
        <th>Firstname</th>
        <th>Lastname</th>
        <th>Email</th>
        <th>Contact</th>
        <th>Edit</th>
        <th>Delete</th>
      </tr>
    </thead>
    <tbody>
    <%
    	for(studentbean s:list)
    	{
    %>
      <tr>
        <td><%=s.getId() %></td>
        <td><%=s.getFname() %></td>
        <td><%=s.getLname() %></td>
        <td><%=s.getEmail() %></td>
        <td><%=s.getContact() %></td>
        <td>
        	<form action = "ActionController" name ="edit" method ="post">
        		<input type = "hidden" name = "id" value= "<%=s.getId() %>">
        		<input type ="submit" name = "action" value ="EDIT">
        	</form>
        </td>
        <td>
        	<form action ="ActionController" name ="delete" method = "post">
        	<input type = "hidden" name = "id" value = "<%=s.getId() %>">
        	<input type = "submit" name = "action" value = "DELETE">
        	</form>
        </td>
      </tr>
    <%
    	}
    %>
    </tbody>
  </table>
</div>
</body>
</html>