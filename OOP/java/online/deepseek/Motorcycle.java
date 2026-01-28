public class Motorcycle extends Vehicle {
	private boolean hasSideCar;

	public Motorcycle(String brand, int year, boolean hasSideCar) {
		super(brand, year);
		this.hasSideCar = hasSideCar;
	} 

	public void doWheelie() {
		System.out.println("Motorcycle doing a wheelie!");
	}

	@Override
	public void displayInfo() {
		super.displayInfo();
		if(this.hasSideCar)
			System.out.println("has side car");
		else 
			System.out.println("has no side car");
	}

	@Override
	public double calculateMaintenanceCost() {
		if(this.hasSideCar)
			return 300;
		else 
			return 200;
	} 

	@Override
	public void start() {
		System.out.println("Motorcycle engine started");
	}

	@Override
	public void stop() {
		System.out.println("Motorcycle engine stopped");
	}

	@Override
	public void accelerate(double rate){
		System.out.println("Motorcycle accelerating at rate: " + rate + " km/h²");
	}
}