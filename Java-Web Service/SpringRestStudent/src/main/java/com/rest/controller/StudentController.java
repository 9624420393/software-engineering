package com.rest.controller;

import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;

import org.springframework.web.bind.annotation.RestController;

import com.rest.model.Student;
import com.rest.service.StudentService;

@RestController
public class StudentController {

	@Autowired
	private StudentService service;
	
	@GetMapping("/")
	public String getdata() {
		
		return "hello";
		
	}
	
	@GetMapping("/student")
	public List<Student> getAllUsers(){
		return this.service.getAllUsers();
	}
	
	@GetMapping("/student/{id}")
	public Optional<Student>getUserById(@PathVariable("id") int id) {
		
		return this.service.getUserById(id);
	}
	
	@PostMapping("/addstudent")
	public Student addUser(@RequestBody Student s) {
		System.out.println("add user called");
		return this.service.saveUser(s);
	}
	@PutMapping("/updateuser")
	public Student updateUser(@RequestBody Student s) {
		return this.service.saveUser(s);
	}
	
	@DeleteMapping("/student/{id}")
	public void deleteUser(@PathVariable("id") int id) {
		System.out.println("delete called");
		this.service.deleteUser(id);
	}
	
	
	
}
