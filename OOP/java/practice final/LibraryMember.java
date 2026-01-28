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
				Borrowable b = (Borrowable) book;
				return b.borrow(this, borrowRecords);
			}
			else
				return false;
		}
		else 
			return false;
	}


    public boolean borrow(Book book, BorrowRecords borrowRecords) {
        if(book instanceof Borrowable)
        {
            Borrowable b = (Borrowable)book;
            if(borrowRecords.isAvailable(b))
            {
                borrowRecords.addBorrowingRecord(b, this);
                return b.borrow(this, borrowRecords);
            }
            else
                return false;
        }
        else
            return false;
    }
}

public boolean borrow(Book book, BorrowRecords borrowRecords) {
    if (book instanceof Borrowable) {
        if (borrowRecords.isAvailable(book)) {
            Borrowable b = (Borrowable) book;
            boolean success = b.borrow(this, borrowRecords);
            if (success) {
                borrowRecords.addBorrowingRecord(book, this);
            }
            return success;
        }
    }
    return false;
}



public class TestLibrarySystem {
    public static void main(String[] args) {
        // Authors
        Author a1 = new Author("Gilberg", "Richard");
        Author a2 = new Author("Pratchett", "Terry");
        Author a3 = new Author("Cioro", "Julian");

        // Books
        Book b1 = new TextBook("Data Structures", a1, 1998, "Computer Science");
        Book b2 = new Novel("The Long Earth", a2, 2016, Genre.ScienceFiction);
        Book b3 = new FilipinianaMaterial("Baybayin", a3, 1911, PhilippineIslandGroup.Visayas); // Not borrowable

        // Borrow records and members
        BorrowRecords logs = new BorrowRecords();
        LibraryMember m1 = new LibraryMember("Juan");
        LibraryMember m2 = new LibraryMember("Ana");

        // Borrow actions
        System.out.println(m1.borrow(b1, logs)); // true (TextBook)
        System.out.println(m1.borrow(b2, logs)); // true (Novel)
        System.out.println(m1.borrow(b3, logs)); // false (FilipinianaMaterial is not Borrowable)

        // Try borrowing same books again
        System.out.println(m2.borrow(b1, logs)); // false (already borrowed by Juan)
        System.out.println(m2.borrow(b2, logs)); // false (already borrowed by Juan)

        // Returning and retry
        logs.returnBorrowedBook(b1);
        System.out.println(m2.borrow(b1, logs)); // true (now available)

        // Print final records
        System.out.println("\nFinal Borrow Records:");
        System.out.println(logs);
    }
}
}

// public class LibraryMember {
// 	private String name;

// 	public LibraryMember(String name) {
// 		this.name = name;
// 	}

// 	public String getaName() {
// 		return this.name;
// 	}

// 	public boolean borrow(Book book, BorrowRecords borrowRecords) {
// 		if (!(book instanceof Borrowable)) 
// 			return false;
// 		else
// 		{
// 			Borrowable borrowableBook = (Borrowable) book;
// 			boolean b = borrowableBook.borrow(this, borrowRecords);
// 			return b;
// 		}
// 	}
// }