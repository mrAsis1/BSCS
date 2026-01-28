public abstract class Course {
	private String courseCode;
	private String title;
	private ArrayList<Instructor> instructors;

	public Course(String courseCode, String title, Instructor mainInstructor) {
		this.courseCode = courseCode;
		this.title = title;
		this.instructors = new ArrayList<Instructor>();
		this.instructors.add(mainInstructor);
	}

	public Course(Course copy) {
		this.courseCode = copy.getCourseCode();
		this.title = copy.getTitle();
		this.instructors = new ArrayList<Instructor>(copy.getInstructors());
	}

	public void addAdditionalInstructor(Instructor instructor) {
		this.instructors.add(instructor);
	}

	public ArrayList<Instructor> getInstructors() {
		return this.instructors;
	}

	public String getCourseCode() {
		return this.courseCode;
	}

	public String getTitle() {
		return this.title;
	}

	@Override
	public String toString() {
	    String text = this.title + " (" + this.courseCode + ") taught by ";
	    for (Instructor i : this.instructors) {
	        text += i.getName() + ", ";
	    }
	    return text.substring(0, text.length() - 2);
	}
}