package ManyToMany;

import java.util.Set;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.ManyToMany;
import javax.persistence.Table;

@Entity
@Table(name="s_data")
public class Subscription {
	
	@Id
	private int sub_id;
	private String sub_name;
	
	@ManyToMany
	private Set<Reader> Reader;

	public int getSub_id() {
		return sub_id;
	}

	public void setSub_id(int sub_id) {
		this.sub_id = sub_id;
	}

	public String getSub_name() {
		return sub_name;
	}

	public void setSub_name(String sub_name) {
		this.sub_name = sub_name;
	}

	public Set<Reader> getReader() {
		return Reader;
	}

	public void setReader(Set<Reader> reader) {
		Reader = reader;
	}

	@Override
	public String toString() {
		return "Subscription [sub_id=" + sub_id + ", sub_name=" + sub_name + ", Reader=" + Reader + "]";
	}
	

}
