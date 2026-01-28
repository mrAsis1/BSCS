public class Seat {
	private String name;

	public Passenger passenger = new Passenger();

	public class(String name) {
		this.name = name;
	}

	public String getName() {
		return this.name;
	}

	public boolean isAvailable() {
		if(this.passenger == null)
			return true;
		else 
			return false;
	}

	public boolean setPassenger(Passenger passenger) {
		if(isAvailable())
		{
			this.passenger = passenger;
			return true;
		}
		return false;
	}

	public Passenger getPassenger() {
		return this.passenger;
	}

	@Override
	public String toString() {
		return "[" + (this.isAvailable()? this.name:"XX") + "]";
	}	
}