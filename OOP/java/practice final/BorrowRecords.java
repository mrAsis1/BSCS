import java.util.*;

public class BorrowRecords {
    private HashMap<Book, LibraryMember> records;

    public BorrowRecords() {
        records = new HashMap<Book, LibraryMember>();
    }

    public boolean isAvailable(Book book) {
        return !records.containsKey(book);
    }

    // Fix: This method must match what Novel.java is calling
    public int getNumberOfBooksBorrowed(LibraryMember member) {
        int count = 0;
        for (LibraryMember m : records.values()) {
            if (m.equals(member)) {
                count++;
            }
        }
        return count;
    }

    public void addBorrowingRecord(Book book, LibraryMember member) {
        records.put(book, member);
    }

    public void returnBorrowedBook(Book book) {
        records.remove(book);
    }

    @Override
    public String toString() {
        return records.toString();
    }

    // public static void main(String[] args) {
    // 	Author a = new Author("Coelho", "paulo");
    // 	Novel n = new Novel("The Alchemist", a, 1988, Genre.Fantasy);
    // 	System.out.println(n.getGenre());
    // }
}
