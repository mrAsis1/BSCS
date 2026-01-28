public class Bird extends Animal implements Iwalker {
	
	Bird() {

	}

	Bird(String name) {
		super(name);
	}

	public void fly() {
		System.out.println(super.name + " is flying");
	}

	public void walk() {
		System.out.println(super.name + " is flying");
	}
}