public class TestLibraryMedia {
    public static void main(String[] args) {
        // Authors
        Author a1 = new Author("George", "Orwell");
        Author a2 = new Author("Stephen", "King");
        Author a3 = new Author("Jane", "Doe");

        // Media
        Media m1 = new Book("1984", 1949, a1, "Dystopian");
        Media m2 = new DVD("It", 2017, a2, 135);
        Media m3 = new Magazine("TechToday", 2024, a3, 42); // Not Borrowable

        // Members
        LibraryMember lm1 = new LibraryMember("Alice");
        LibraryMember lm2 = new LibraryMember("Bob");

        // Records
        BorrowRecords logs = new BorrowRecords();

        // Tests
        System.out.println(lm1.borrow(m1, logs)); // true
        System.out.println(lm1.borrow(m2, logs)); // true
        System.out.println(lm1.borrow(m3, logs)); // false

        System.out.println(lm2.borrow(m1, logs)); // false (already borrowed)
        logs.returnMedia(m1);
        System.out.println(lm2.borrow(m1, logs)); // true (now available)

        System.out.println("\nBorrow Logs:");
        System.out.println(logs);
    }
}
