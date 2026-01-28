public class Main {
	public static void main(String[] args) {

		Vehicle[] vehicles= new Vehicle[3];

		vehicles[0] = new Car("totoya", 2020, 4);
		vehicles[1] = new Motorcycle("harry", 2019, false);
		vehicles[2] = new ElectricCar("tilla", 2021, 4, 75.5);

		for(int i = 0; i < vehicles.length; i++) {
			vehicles[i].displayInfo();
			vehicles[i].start();
            vehicles[i].accelerate(10.5);
            System.out.println("Maintenance cost: $" + vehicles[i].calculateMaintenanceCost());
            System.out.println();
		}

		for(int i = 0; i < vehicles.length; i++) {
			if(vehicles[i] instanceof Car)
				((Car)vehicles[i]).openTrunk();

			if(vehicles[i] instanceof Motorcycle)
				((Motorcycle)vehicles[i]).doWheelie();

			if(vehicles[i] instanceof ElectricCar)
				((ElectricCar)vehicles[i]).chargeBattery();
		}
	}
}