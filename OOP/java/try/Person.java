public class Person {
	private String name;
	public int age;

	Person() {

	}

	// Person() {
	// 	this.name = "";
	// 	this.age = 0;
	// }

	Person(String name , int age) {
		this.name = name;
		this.age = age;
	}

	void setName(String name){
		this.name = name;
	}

	String getName(){
		return this.name;
	}

	void setAge(int age){
		this.age = age;
	}

	int getAge(){
		return this.age;
	}
}