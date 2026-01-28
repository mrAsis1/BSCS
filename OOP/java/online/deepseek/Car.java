public class Car extends Vehicle {
	private int numDoors;

	public Car(String brand, int year, int numDoors) {
		super(brand, year);
		this.numDoors = numDoors;
	}

	@Override
	public void start() {
		System.out.println("Car engine started");
	}

	@Override
	public void stop() {
		System.out.println("Car engine stopped");
	}

	@Override
	public void accelerate(double rate){
		System.out.println("Car accelerating at rate: " + rate + " km/h²");
	}

	@Override
    public double calculateMaintenanceCost() {
        return 500 + (this.numDoors * 50);
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Type: Car, Doors: " + this.numDoors);
    }
    
    public void openTrunk() {
        System.out.println("Car trunk opened");
    }
}