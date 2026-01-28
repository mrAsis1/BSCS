public abstract class Vehicle {
	public String brand;

	Vehicle() {

	}

	Vehicle(String brand) {
		this.brand = brand;
	}

	public void move() {
		System.out.println("Vehicle is moving");
	}
}