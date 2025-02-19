package com.dao;

import java.util.List;

import javax.transaction.Transactional;

import org.springframework.orm.hibernate5.HibernateTemplate;

import com.model.Employee;

public class Empdao {

	private HibernateTemplate hibernateTemplate;

	public HibernateTemplate getHibernateTemplate() {
		return hibernateTemplate;
	}

	public void setHibernateTemplate(HibernateTemplate hibernateTemplate) {
		this.hibernateTemplate = hibernateTemplate;
	}
	
	@Transactional
	public void insertorUpdateUser(Employee u) {
		this.hibernateTemplate.saveOrUpdate(u);
		
	}
	
	@Transactional
	public void deleteUser(int id) {
	Employee e=	this.hibernateTemplate.get(Employee.class, id);
	}
	
	
	public Employee getUserById(int id) {
		return this.hibernateTemplate.get(Employee.class,id);
		
	}
	
	public List<Employee> getAllUser(){
		
	    return this.hibernateTemplate.loadAll(Employee.class);
	}
}
