public class Dog extends Animal implements Iwalker {

	Dog() {

	}

	Dog(String name) {
		super(name);
	}

	public void bark() {
		System.out.println(super.name + " arff arff");
	}

	@Override
	public void walk()
	{
		System.out.println(super.name + " is walking");
	}
}