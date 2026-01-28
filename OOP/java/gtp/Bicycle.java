public class Bicycle extends Vehicle implements Iwalker {

	Bicycle() {

	}

	Bicycle(String brand) {
		super(brand);
	}

	@Override
	public void move() {
		System.out.println(super.brand + " is moving");
	}

	@Override
	public void walk() {
		System.out.println(super.brand + " is walking.. WALKING BICYCLE CAN WALK");
	}
}