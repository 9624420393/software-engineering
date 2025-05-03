package com.example.controller;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class Greetcontroller {

	@GetMapping("/")
	public String greeting() {
		System.out.println("greeting");
		return "Hello, World!";
	}
	
	@GetMapping("/hello")
	public String hello() {
		System.out.println("hello");
		return "hello";
	}
}
