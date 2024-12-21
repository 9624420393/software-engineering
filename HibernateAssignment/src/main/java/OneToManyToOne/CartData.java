package OneToManyToOne;

import java.util.Set;

import javax.persistence.Entity;
import javax.persistence.Id;

import javax.persistence.OneToMany;



@Entity
public class CartData {
	
	@Id
	private int cart_id;
	private double total;
    private String name;
   
     
   @OneToMany(mappedBy="cartdata")
    private Set<ItemData> ItemData;


public int getCart_id() {
	return cart_id;
}


public void setCart_id(int cart_id) {
	this.cart_id = cart_id;
}


public double getTotal() {
	return total;
}


public void setTotal(double total) {
	this.total = total;
}


public String getName() {
	return name;
}


public void setName(String name) {
	this.name = name;
}


public Set<ItemData> getItemData() {
	return ItemData;
}


public void setItemData(Set<ItemData> itemData) {
	ItemData = itemData;
}


@Override
public String toString() {
	return "CartData [cart_id=" + cart_id + ", total=" + total + ", name=" + name + ", ItemData=" + ItemData + "]";
}



}
	