public class Book {
	private String title;
	private String author;

	public Book(String title, String author)
	{
		this.title = title;
		this.author = author;
	}

	public Book(Book book)
	{
		this.title = book.title;
		this.author = book.author;
	}

	public String getTitle() {
		return this.title;
	}

	public String getAuthor() {
		return this.author;
	}

}