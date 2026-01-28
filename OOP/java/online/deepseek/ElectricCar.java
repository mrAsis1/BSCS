public class ElectricCar extends Car {
	private double batteryCapacity;

	public ElectricCar(String brand, int year, int numDoors, double batteryCapacity) {
		super(brand, year, numDoors);
		this.batteryCapacity = batteryCapacity;
	}

	public void chargeBattery() {
		System.out.println("Electric Car Battery Charging");
	}

	@Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Battery Capacity: " + this.batteryCapacity);
    } 

    @Override
	public double calculateMaintenanceCost() {
		return super.calculateMaintenanceCost() * 0.7;
	}

	@Override
	public void start() {
		System.out.println("Electric car silently started");
	}

	@Override
	public void stop() {
		System.out.println("Electric car engine stopped");
	}

	@Override
	public void accelerate(double rate){
		System.out.println("Electric car accelerating at rate: " + rate + " km/h²");
	}
}