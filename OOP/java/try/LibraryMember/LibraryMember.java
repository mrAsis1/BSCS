public class LibraryMember {
	private String name;

	public LibraryMember(String name) {
		this.name = name;
	}

	public String getName() {
		return this.name;
	}

	public boolean borrow(Book book, BorrowRecords borrowRecords) {
		if(book instanceof Borrowable) {
			if(borrowRecords.isAvailable(book)) {
				Borrowable b = (Borrowable)book;
				return b.borrow(this, borrowRecords);
			}
			else 
				return false;
		}
		else 
			return false;
	}
}