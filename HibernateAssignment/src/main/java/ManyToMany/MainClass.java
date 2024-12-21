package ManyToMany;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;


public class MainClass {
	public static void main(String[] args) {
		SessionFactory sf = new Configuration().configure("hibernate.cfg.xml").buildSessionFactory();
		Session session = sf.openSession();
		Transaction tx = session.beginTransaction();
		
		Reader r1= new Reader();
		r1.setReader_id(1);
		r1.setEmail("v@gmail.com");
		r1.setFname("vrunda");
		r1.setLname("patel");
		session.save(r1);
		
		Reader r2= new Reader();
		r2.setReader_id(2);
		r2.setEmail("A@gmail.com");
		r2.setFname("Arth");
		r2.setLname("Desai");
		session.save(r2);
		
		
		Subscription s1= new Subscription();
		s1.setSub_id(1);
		s1.setSub_name("Oxford");
		session.save(s1);
		
		Subscription s2=new Subscription();
		s2.setSub_id(2);
		s2.setSub_name("Atul");
		session.save(s2);
		
		tx.commit();
		session.close();
		sf.close();
		
		
		
  }
}