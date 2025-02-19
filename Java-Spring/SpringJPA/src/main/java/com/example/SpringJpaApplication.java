package com.example;

import java.util.List;
import java.util.Optional;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ApplicationContext;

import com.example.model.User;
import com.example.repo.UserRepository;

@SpringBootApplication
public class SpringJpaApplication {

	public static void main(String[] args) {
	    ApplicationContext  con=   	SpringApplication.run(SpringJpaApplication.class, args);
		UserRepository repo=con.getBean(UserRepository.class);
		
		// to save one data//
		
		//User u1  = new User("python", 9765321, "delhi" );
		//repo.save(u1);
		
		User u2= new User("java",789644122,"baroda");
		repo.save(u2);
		
		
		 //Optional<User> u = repo.findById(1);
		 //System.out.println(u);
		//User u=new User("java",46546231,"ahmedabad");
		//repo.save(u);
		
		//repo.deleteById(1);
		//System.out.println("deleted");
		
		  List<User> list=   repo.findAll();
		  System.out.println(list);
	}
	

}
