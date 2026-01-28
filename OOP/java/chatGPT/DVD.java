public class DVD extends Media implements Borrowable {
	public int duration;

	public DVD(String title, int year, Author mainAuthor, int duration) {
		super(title, year, mainAuthor);
		this.duration = duration;
	}

	public int getDuration() {
		return this.duration;
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
    	return super.toString() + " [Duration: " + duration + " mins]";
	}

} 
