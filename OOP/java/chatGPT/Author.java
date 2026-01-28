public class Author {
	public String firstName;
	public String lastName;

	public Author(String firstName, String lastName) {
		this.firstName = firstName;
		this.lastName = lastName;
	}

	@Override
	public String toString() {
		 return this.firstName + " " + this.lastName;
	}
}
