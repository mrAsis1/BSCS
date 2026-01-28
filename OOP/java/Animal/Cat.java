public class Cat extends Mammal {
	
	public Cat(String name) {
		super(name);
	}

	public void greets() {
		System.out.println("Meaw");
	}

	@Override
	public String toString() {
		return "Cat Name : " + super.name;
	} 
}