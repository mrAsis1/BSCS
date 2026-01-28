public class Car extends Vehicle{
	
	Car() {

	}

	Car(String brand) {
		super(brand);
	}

	@Override
	public void move() {
		System.out.println( super.brand + " is moving");
	}
}