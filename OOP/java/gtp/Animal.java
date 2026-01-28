public abstract class Animal{
	public String name;

	Animal() {

	}

	Animal(String name) {
		this.name = name;
	}

	public void makeSound() {
		System.out.println("Animal make sound");
	}
}