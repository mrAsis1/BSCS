import java.util.HashMap;

public class BorrowRecords {
    private HashMap<Media, LibraryMember> records;

    public BorrowRecords() {
        records = new HashMap<>();
    }

    public boolean isAvailable(Media media) {
        return !records.containsKey(media);
    }

    public void addBorrowingRecord(Media media, LibraryMember member) {
        records.put(media, member);
    }

    public void returnMedia(Media media) {
        records.remove(media);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("BorrowRecords:\n");
        for (Media media : records.keySet()) {
            LibraryMember member = records.get(media);
            sb.append(media.getTitle())
              .append(" was borrowed by ")
              .append(member.getName())
              .append("\n");
        }
        return sb.toString();
    }
}
