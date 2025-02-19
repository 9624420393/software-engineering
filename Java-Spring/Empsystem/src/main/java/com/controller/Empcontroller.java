package com.controller;

import java.util.List;

import javax.servlet.http.HttpServletRequest;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.servlet.ModelAndView;
import org.springframework.web.servlet.view.RedirectView;

import com.dao.Empdao;
import com.model.Employee;

@Controller
public class Empcontroller {

	
	@Autowired
	private Empdao dao;
	
	
	@RequestMapping("/")
	public String index() {
		
		return "index";
	}
	
	@RequestMapping("/home")
	public String home(Model m) {
		List<Employee> list=this.dao.getAllUser();
		m.addAttribute("list",list);
		return "home";
	}
	
	@RequestMapping("/register")
	public String registerUser(@ModelAttribute Employee u,Model m) {
		
		System.out.println(u);
		this.dao.insertorUpdateUser(u);
		List<Employee> list=this.dao.getAllUser();
		m.addAttribute("list",list);
		return "home";
	}
	@RequestMapping(value="/edit/{id}")
	public ModelAndView editUser(@PathVariable("id")int id) {
		
		Employee u=this.dao.getUserById(id);
		System.out.println(u);
		ModelAndView m= new ModelAndView();
		m.addObject("u",u);
		m.setViewName("update");
		return m ;
		
	}
	@RequestMapping(value = "delete/{id}")
	public String deleteUser(@PathVariable("id") int id,Model m) {
		this.dao.deleteUser(id);
		List<Employee> list = this.dao.getAllUser();
		m.addAttribute("list",list);
		return "home";
	}
	

}
