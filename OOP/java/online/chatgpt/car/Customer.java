import java.util.*;

public class Customer {
	private String name;
	private HashMap<Car, Rental> rentals;

	public Customer(String name) {
		this.name = name;
		this.rentals = new HashMap<Car, Rental>();
	}

	public String getName() {
		return this.name;
	}

	public HashMap<Car, Rental> getRentals() {
		return this.rentals;
	}

	public boolean rentCar(Rentable car) {
		Car c = (Car)car;
		if(c.isAvailable()) {
			Rental r = new Rental(c, this);
			c.rentCar(this,rentals);
			rentals.put(c, r);
			return true;
		}
		else
			return false;


	}

	@Override
	public String toString() {
		return "Customer: " + name + ", Rentals: " + rentals.size();
	}
}