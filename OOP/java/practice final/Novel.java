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
	public boolean borrow(LibraryMember member, BorrowRecords borrowRecords) {
		if(!borrowRecords.isAvailable(this))
    		return false;

		if(borrowRecords.getNumberOfBooksBorrowed(member) >= 3)
  			return false;

		if(this.numTimesBorrowed >= 10)
			return false;

		borrowRecords.addBorrowingRecord(this, member);
		this.numTimesBorrowed++;
		return true; 
	}

	@Override
    public String toString() {
        return "[N: " + this.numTimesBorrowed + "] " + super.toString();
    }
}