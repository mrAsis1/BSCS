public abstract class Vehicle implements Movable{
	protected String brand;
	protected int year;

	public Vehicle(String brand, int year) {
		this.brand = brand;
		this.year = year;
	}

	public void displayInfo() {
		System.out.println("Brand: " + brand + ", Year: " + year);
	}

	public abstract double calculateMaintenanceCost(); 
}