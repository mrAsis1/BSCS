public class LibraryMember {
	public String name;

	public LibraryMember(String name) {
		this.name = name;
	}

	public String getName() {
		return this.name;
	}

	public boolean borrow(Media media, BorrowRecords records) {
	    if(media instanceof Borrowable) {
	        Borrowable b = (Borrowable) media;
	        return b.borrow(this, records);
	    } else {
	        return false;
    }
}
}