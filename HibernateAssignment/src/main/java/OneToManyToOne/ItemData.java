package OneToManyToOne;

import javax.persistence.Entity;
import javax.persistence.Id;
import javax.persistence.ManyToOne;


@Entity
public class ItemData {
	
	@Id
      private int id;
      private String item_id;
      private double item_total;
      private int quantity;
      
      @ManyToOne
      private CartData cartdata;

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getItem_id() {
		return item_id;
	}

	public void setItem_id(String item_id) {
		this.item_id = item_id;
	}

	public double getItem_total() {
		return item_total;
	}

	public void setItem_total(double item_total) {
		this.item_total = item_total;
	}

	public int getQuantity() {
		return quantity;
	}

	public void setQuantity(int quantity) {
		this.quantity = quantity;
	}

	public CartData getCartdata() {
		return cartdata;
	}

	public void setCartdata(CartData cartdata) {
		this.cartdata = cartdata;
	}

	@Override
	public String toString() {
		return "ItemData [id=" + id + ", item_id=" + item_id + ", item_total=" + item_total + ", quantity=" + quantity
				+ ", cartdata=" + cartdata + "]";
	}
      
}
