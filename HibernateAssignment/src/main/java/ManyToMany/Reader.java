package ManyToMany;

import java.util.Set;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.ManyToMany;
import javax.persistence.Table;

@Entity
@Table(name="r_data")
public class Reader {

	@Id
	private int reader_id;
	private String email;
	private String fname;
	private String lname;
	
	@ManyToMany
	private Set<Subscription> Subscription;

	public int getReader_id() {
		return reader_id;
	}

	public void setReader_id(int reader_id) {
		this.reader_id = reader_id;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public String getFname() {
		return fname;
	}

	public void setFname(String fname) {
		this.fname = fname;
	}

	public String getLname() {
		return lname;
	}

	public void setLname(String lname) {
		this.lname = lname;
	}

	public Set<Subscription> getSubscription() {
		return Subscription;
	}

	public void setSubscription(Set<Subscription> subscription) {
		Subscription = subscription;
	}

	@Override
	public String toString() {
		return "Reader [reader_id=" + reader_id + ", email=" + email + ", fname=" + fname + ", lname=" + lname
				+ ", Subscription=" + Subscription + "]";
	}
	
	
}
