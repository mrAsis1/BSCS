public class Passenger {
	private String name;
	public boolean isPWD;

	public Passenger(String name, boolean isPWD) {
		this.name = name;
		this.isPWD = isPWD;
	}

	public String getName() {
		return this.name;
	}

	@Override
	public boolean equals(Object obg) {

	}

	@Override
	public String toString() {
		return this.name + ((this.isPWD)? " [P]":"") + "\n";
	}
}