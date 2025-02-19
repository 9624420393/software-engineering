package ConstructorInj;

public class User {
	
	private int id;
	private String name;
	
	public User() {
		super();
		// TODO Auto-generated constructor stub
	}


	public User(int id, String name) {
		super();
		this.id = id;
		this.name = name;
	}


	@Override
	public String toString() {
		return "User [id=" + id + ", name=" + name + "]";
	}
	
	

}
