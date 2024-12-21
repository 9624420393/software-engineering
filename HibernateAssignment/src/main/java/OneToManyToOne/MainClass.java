package OneToManyToOne;

import java.util.HashSet;
import java.util.Set;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

public class MainClass {
	public static void main(String[] args) {
	SessionFactory sf = new Configuration().configure("hibernate.cfg.xml").buildSessionFactory();
	Session session = sf.openSession();
	Transaction tx = session.beginTransaction();
	
    
	ItemData I1= new ItemData();
	I1.setId(1);
	I1.setItem_id("ZPQ123");
	I1.setItem_total(20000);
	I1.setQuantity(2);
	session.save(I1);
	
	CartData c1= new CartData();
	c1.setCart_id(1);
	c1.setTotal(20000);
	c1.setName("vrunda");
	session.save(c1);

	Set item= new HashSet();
	item.add("table");
	item.add("Chair");
	
	c1.setItemData(item);

	I1.setCartdata(c1);


	tx.commit();
	session.close();
	sf.close();
	
  }
}