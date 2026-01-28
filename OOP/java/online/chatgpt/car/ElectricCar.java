public class ElectricCar extends Car implements Rentable {
	private int batteryCapacity;
	private int numTimesRented;

	public ElectricCar(String plateNumber, 
								String manufacturer,
								int year, 
								String carType, 
								int batteryCapacity) {
		super(plateNumber, manufacturer, year, carType);
		this.batteryCapacity = batteryCapacity;
		this.numTimesRented = 0;
	}

	public int getBatteryCapacity() {
		return this.batteryCapacity;
	}

	@Override
	public boolean rent(Customer  customer , RentalRecords records) {
		Vehicle v = (Vehicle)this;
		if(records.isAvailable(v)) {
			if(records.getNumVehiclesRented(customer) < 2 && this.numTimesRented < 20) {
				records.addRental(v, customer);
				numTimesRented++;
				return true;
			}
			else
				return false;
		}
		else 
			return false;
	}

	@Override
	public String toString() {
    	return "[R:" + this.numTimesRented + "] " + super.toString();
	}
}




