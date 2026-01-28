public class Main {
	public static void main(String[] args) {

		Mammal m = new Mammal("maaa");
		Cat c = new Cat("cat");
		Dog d = new Dog("ddd");

		System.out.println(m.toString());
		System.out.println(c.toString());
		c.greets();
		System.out.println(d.toString());
		d.greets();
		d.greets(new Dog("dddd"));


	}
}