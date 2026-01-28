public class Author {
	private String lastName;
	private String firstName;

	public Author(String lastName, String firstName) {
		this.lastName = lastName;
		this.firstName = firstName;
	}

	public String getLastName() {
		return this.lastName;
	}

	public String getFirstName() {
		return this.firstName;
	}

	@Override
	public String toString() {
		return firstName + " " + lastName;
	}
}