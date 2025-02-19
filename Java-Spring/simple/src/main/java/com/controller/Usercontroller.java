package com.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
public class Usercontroller {

	@RequestMapping("/welcome")
	public String welcomepage() {
		
		return "welcome";
	}
}
