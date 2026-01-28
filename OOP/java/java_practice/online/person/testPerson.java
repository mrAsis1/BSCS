public class testPerson {

	public static void main(String[] args) {

		Person p1 = new Person("pipay",18);
		Person p2 = new Person();

		System.out.println(p1.getName() + " is " + p1.getAge() + " years of old");
		p2.setName("prince");
		p2.setAge(23);
		System.out.println(p2.getName() + " is " + p2.getAge() + " years of old");
	}
}