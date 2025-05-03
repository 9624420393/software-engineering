package com.controller;

import java.util.ArrayList;
import java.util.List;

import javax.servlet.http.HttpServletRequest;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
public class Usercontoller {

	@RequestMapping("/")
	public String index(Model m ) {
	
	List list= new ArrayList();
	list.add(1);
	list.add("vrunda");
	list.add("98745125");
	list.add(false);
	list.add(2);
	list.add("Arth");
	list.add("879445662");
	list.add("Java");
	m.addAttribute("list", list);
		
		return "index";
	}
	
}
