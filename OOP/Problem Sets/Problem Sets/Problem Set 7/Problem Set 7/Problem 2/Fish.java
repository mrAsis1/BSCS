public class Fish extends Animal implements Pet {
	private String name;

	public Fish() {
		super(0);
	}

	@Override
	public String getName() {
		return this.name;
	}

	@Override
	public void setName(String name) {
		this.name = name;
	}

	@Override
	public void play() {
		System.out.println("Fish Playing...");
	}

	@Override
	public void walk() {
		System.out.println("Fish can't Walk!!!");
	}

	@Override
	public void eat() {
		System.out.println("Fish Eating...");
	}
}