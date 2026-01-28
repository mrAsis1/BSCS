public abstract class Media {
	protected String title;
	protected int year;
	protected Author mainAuthor;

	public Media(String title, int year, Author mainAuthor) {
		this.title = title;
		this.mainAuthor = mainAuthor;
	}

	public String getTitle() {
		return this.title;
	}

	public int getYear() {
		return this.year;
	}

	public Author getAuthor() {
		return this.mainAuthor;
	}

	@Override
	public String toString() {
    	return "\"" + title + "\" (" + year + ") by " + mainAuthor;
}

}


