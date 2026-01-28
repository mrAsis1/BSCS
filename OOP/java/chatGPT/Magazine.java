public class Magazine extends Media {
	public int issueNumber;

	public Magazine(String title, int year, Author mainAuthor, int issueNumber) {
		super(title, year, mainAuthor);
		this.issueNumber = issueNumber;
	}

	public int getIssueNumber() {
		return this.issueNumber;
	}
}