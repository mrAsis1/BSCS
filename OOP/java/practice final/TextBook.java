public class TextBook extends Book implements Borrowable {
	private String subject;

	public TextBook(String title, Author mainAuthor, int publicationYear, String subject) {

	}

	public TextBook(TextBook textbook) {

	}

	public String getSubject() {
		return this.subject;
	}

	@Override
	public boolean borrow(LibraryMember, member, BorrowRecords borrowRecords) {
		
	}
} 