public class TestPerson {
	public static void main(String[] args)
	{
		Person p = new Person();
		p.setName("Vince Eleazar G. Moreno");
		p.setAge(11);

		System.out.println("My name is " + p.getName() + "and i'm " + p.getAge() + " years of old");
	}
}