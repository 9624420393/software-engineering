package com.rest.service;

import java.util.Arrays;
import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

import com.rest.model.Student;
import com.rest.repo.StudentRepo;

@Component
public class StudentService {

	@Autowired
	private StudentRepo repo;
	
	public List<Student> getAllUsers(){
		return repo.findAll();
	}
	
	public Student saveUser(Student s) {
		return this.repo.save(s);
	}
	
	public Optional<Student> getUserById(int id) {
		return this.repo.findById(id);
	}
	
	public Student updateUser(Student s) {
		return this.repo.save(s);
	}
	
	public void deleteUser(int id) {
	    this.repo.deleteById(id);
	}
	
}
