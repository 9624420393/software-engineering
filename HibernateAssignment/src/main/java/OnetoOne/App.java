package OnetoOne;
import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

public class App {
    public static void main( String[] args )
    {
    	SessionFactory sf = new Configuration().configure("hibernate.cfg.xml").buildSessionFactory();
		Session session = sf.openSession();
		Transaction tx = session.beginTransaction();
		
		
		Address a1=new Address();
		a1.setAid(2);
		a1.setStreet("A1");
		a1.setCity("nadiad");
		a1.setState("gujarat");
		a1.setZip_code("465768");
		session.save(a1);
		
		student  s1= new student();
		s1.setId(2);
        s1.setName("vrunda");
		s1.setAddressline("nkv");
		s1.setAddress(a1);
		a1.setStu(s1);
		
		session.save(s1);
		
		tx.commit();
		session.close();
		sf.close();
		
		
		
    }
}
