import java.util.*;

public class Customer {
	private String name;
	private HashMap<FoodItem, Order> orders;

	public Customer(String name) {
		this.name = name;
		this.orders = new HashMap<FoodItem, Order>();
	}

	public String getName() {
		return this.name;
	}

	public HashMap<FoodItem, Order> getOrders() {
		return this.orders;
	}

	public boolean placeOrder(Orderable food) {
		FoodItem f = (FoodItem)food;
		if(f.isAvailable()) {
			Order o = new Order(f,this);
			orders.put(f,o);
			return true;
		}
		else
			return false;
	}

	@Override
	public String toString() {
		return "Customer: " + name + ", Orders: " + orders.size();
	}
}