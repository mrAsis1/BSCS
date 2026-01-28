public class Novel extends Book implements Borrowable {
	private Genre genre;
	private int numTimesBorrowed;

	public Novel(String title, Author mainAuthor, int publicationYear, Genre genre) {
		super(title, mainAuthor, publicationYear);
		this.genre = genre;
		this.numTimesBorrowed = 0;
	}

	public Novel(Novel novel) {
		super(novel);
		this.genre = novel.genre;
		this.numTimesBorrowed = 0;
	}

	public Genre getGenre() {
		return this.genre;
	}

	public int getNumTimesBorrowed() {
		return this.numTimesBorrowed;
	}

	@Override
	public boolean borrow(LibraryMember member , BorrowRecords borrowRecords) {
		if((this.numTimesBorrowed < 10) && 
			(borrowRecords.isAvailable(this) && 
			(borrowRecords.getNumberOfBooksBorrowed(member) < 3)) {
				borrowRecords.addBorrowingRecord(this, member);
				this.numTimesBorrowed++
				return true;
			}
		else
			return false;
	}

	@Override
	    public String toString() {
	        return "{N:" + this.numTimesBorrowed + "} " + super.toString();
	    }
}