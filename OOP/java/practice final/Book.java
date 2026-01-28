import java.util.*;

public abstract class Book {
	private String title;
	private int publicationYear;

	private ArrayList<Author> authors;

	public Book(String title, Author mainAuthor, int publicationYear) {
		this.title = title;
		this.publicationYear = publicationYear;
		this.authors = new ArrayList<Author>();
		this.authors.add(mainAuthor);
	} 

	public Book(Book book) {
		this.title = book.title;
		this.publicationYear = book.publicationYear;
		this.authors = new ArrayList<Author>(book.authors);
	}

	public String getTitle() {
		return this.title;
	}

	public int getPublicationYear() {
		return this.publicationYear;
	}

	public List<Author> getAuthor() {
		return new ArrayList<Author>(this.authors);
	} 

	public void addAdditionalAuthor(Author author) {
		this.authors.add(author);
	}

	@Override
	public String toString() {
		String text = this.title + " (" + this.publicationYear + ") by ";
        for (Author a : this.authors) {
            text += a;
            if (!a.equals(this.authors.get(this.authors.size() - 1))) {
                text += ", ";
            }
        }
        return text + "";
	}
}





public abstract class Book {
	private String title;
	private int publicationYear;
	private ArrayList<Author> authors;

	public Book(String title, Author mainAuthor, int publicationYear) {
		this.title = title;
		this.publicationYear = publicationYear;
		this.authors = new ArrayList<Author>();
		this.authors.add(mainAuthor);
	}

	public Book(Book book)
	{
		this.title = book.getTitle();
		this.publicationYear = book.getPublicationYear();
		this.authors = new ArrayList<Author>(book.getAuthors());
	}

	public String getTitle() {
		return this.title;
	}

	public int getPublicationYear() {
		return this.publicationYear;
	}

	public ArrayList<Author> getAuthor() {
		return new ArrayList<Author>(this.authors);
	}

	public void addAdditionalAuthor(Author author) {
		this.authors.add(author);
	}

	@Override
	public String toString() {
		String text = this.title + " (" + this.publicationYear + ") by ";
        for (Author a : this.authors) {
            text += a;
            if (!a.equals(this.authors.get(this.authors.size() - 1))) {
                text += ", ";
            }
        }
        return text + "";
	}

}