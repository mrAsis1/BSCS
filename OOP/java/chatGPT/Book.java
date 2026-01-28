public class Book extends Media implements Borrowable {
	public String genre;

	public Book(String title, int year, Author mainAuthor, String genre) {
		super(title, year, mainAuthor);
		this.genre = genre;
	}

	public String getGenre() {
		return this.genre;
	}

	@Override
	public boolean borrow(LibraryMember member, BorrowRecords records) {
		if(records.isAvailable(this)) {
			records.addBorrowingRecord(this, member);
			return true;
		}
		else 
			return false;
	}

	@Override
	public String toString() {
    	return super.toString() + " [Genre: " + genre + "]";
	}
} 