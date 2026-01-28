import java.util.*;

public abstract class Vehicle {
	public String licensePlate;
	public String brand;
	public int year;
	public ArrayList<Driver> drivers;

	public Vehicle(String licensePlate, String brand, Driver mainDriver, int year) {
		this.licensePlate = licensePlate;
		this.brand = brand;
		this.year = year;
		this.drivers = new ArrayList<Driver>();
		this.drivers.add(mainDriver);
	}

	public Vehicle(Vehicle copy) {
		this.licensePlate = copy.licensePlate;
		this.brand = copy.brand;
		this.year = copy.year;
		this.drivers = new ArrayList<Driver>(copy.drivers);
	}

	public void addAdditionalDriver(Driver driver) {
		this.drivers.add(driver);
	}

	public ArrayList<Driver> getDrivers() {
		return new ArrayList<Driver>(this.drivers);
	}

	@Override
	public String toString() {
	    String text = this.licensePlate + " (" + this.year + ") - driven by ";
	    for (Driver d : this.drivers) {
	        text += d.getName() + ", ";
	    }
  	  return text.substring(0, text.length() - 2);
	}
}







// In the Vehicle constructor, initialize the drivers collection and append mainDriver as the first driver. Then initialize licensePlate, brand, and year.

// For the copy constructor, copy the licensePlate and year attributes, and shallow copy the drivers list.

// Implement the accessor method getDrivers() to return a copy of the internal list.

// Implement addAdditionalDriver() to add a new driver to the list.

// Override the toString() method using the following structure: