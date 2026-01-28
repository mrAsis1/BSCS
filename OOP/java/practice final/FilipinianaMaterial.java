public class FilipinianaMaterial extends Book {
	private PhilippineIlanGroup islandGroupOrigin;

	FilipinianaMaterial(String title, 
						Author mainAuthor, 
						int publicationYear,
						PhilippineIlanGroup islandGroupOrigin) {
		super(title, mainAuthor, publicationYear);
		this.islandGroupOrigin = islandGroupOrigin;
	}

	PhilippineIlanGroup getIslandgroup() {
		return this.islandGroupOrigin;
	}

	@Override
	public String toString() {
		return super.toString() + " - " + this.islandGroupOrigin;	
	}
}