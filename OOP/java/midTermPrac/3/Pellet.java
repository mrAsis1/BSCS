public class Pellet {

	public int score;
	public boolean isVisible;

	public Rectangle dimension;

	public Pellet(double x, double y, double width, double height, int score) {
		this.dimension = new Rectangle(x, y, width, height);
		this.score = score;
		this.isVisible = true; 
	}

	public Rectangle getDimension() {
		return new Rectangle(this.dimension.getLocation().x, this.dimension.getLocation().y, this.dimension.getWidth(), this.dimension.getHeight());
	}	

	@Override
	public String toString() {
		return "Pellet " + this.dimension;
	}

}