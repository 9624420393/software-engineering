package com.example.controller;

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

import com.example.model.User;
import com.example.service.UService;




@RestController
public class UserController {

	@Autowired
	private UService service;
	
	
	@GetMapping("/user")
	public List<User> getAllUsers(){
		return this.service.getAllUsers();
	}
	
	
	@PostMapping("/addUser")
	public User addUser(@RequestBody User u) {
		System.out.println("add user called");
		return this.service.saveUser(u);
	}
	
	@GetMapping("/User/{id}")
	public Optional<User>getUserById(@PathVariable("id") int id) {
		
		return this.service.getUserById(id);
	}
	@PutMapping("/updateuser")
	public User updateUser(@RequestBody User u) {
		return this.service.saveUser(u);
	}
	
	@DeleteMapping("/student/{id}")
	public void deleteUser(@PathVariable("id") int id) {
		System.out.println("delete called");
		this.service.deleteUser(id);
	}
	
}
