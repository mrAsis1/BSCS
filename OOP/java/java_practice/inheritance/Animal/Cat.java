public class Cat extends Animal {
	private String breed;

	public Cat(String name, String breed) {
		super(name, 4);
		this.breed = breed;
	}

	public String getBreed() {
		return this.breed;
	}
}
