public class BookTesting {
	public static void main(String[] args) {

		Book b1 = new Book("botbot", "oscar");
		Book b2 = new Book(b1);

		System.out.println(b1.getTitle());
		System.out.println(b2.getTitle());
	}
}