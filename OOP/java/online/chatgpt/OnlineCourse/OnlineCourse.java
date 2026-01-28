public class OnlineCourse extends Course implements Enrollable {
	private int numEnrolled;

	public OnlineCourse(String title, Instructor instructor, int year) {
		super(title, instructor, year);
		this.numEnrolled = 0;
	}

	public boolean enroll(Student student, EnrollmentRecords records) {
		if((records.getNumCoursesEnrolled(student) < 5) && (this.numEnrolled < 50)) {
			Course c = (Course)this;
			records.addEnrollment(c,student);
			numEnrolled++;
			return true;
		}
		else 
			return false;
	}

	@Override
	public String toString() {
   	 return "[E:" + this.numEnrolled + "] " + super.toString();
	}
}