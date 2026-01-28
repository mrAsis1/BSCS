public class Rectangle {

	private double width;
	private double height;

	public Point location;

	public Rectangle(double x, double y, double width, double height) {

		this.location = new Point(x, y);
		this.width = width;
		this.height = height;

		if(this.width < 0)
			this.width = 0;
		
		if(this.height < 0)
			this.height = 0;
	}

	public Rectangle(Rectangle r) {

		this.location = new Point(r.getLocation().x, r.getLocation().y);
		this.width = r.width;
		this.height = r.height;

		if(this.width < 0)
			this.width = 0;

		if(this.height < 0)
			this.height = 0;
	}
	
	public Point getLocation() {
		return new Point(this.location.x, this.location.y);
	}

	public double getWidth() {
		return this.width;
	}

	public double getHeight() {
		return this.height;
	}
	
	public void setLocation(double x, double y) {
		this.location.x = x;
		this.location.y = y;
	}

	public void setWidth(double width) {
		this.width = width;
	}

	public void setHeigth(double height) {
		this.height = height;
	}
	
	public boolean contains(Point point) {
		if(((point.x <= (this.location.x + width)) && (point.x >= this.location.x)) && ((point.y <= (this.location.y + height)) && (point.y >= (this.location.y))))
    		return true;
    	return false;
	}

	//
	public boolean collidesWith(Rectangle rectangle)
	{
		if((((rectangle.getLocation().x < (this.location.x + this.width)) && (rectangle.getLocation().x > this.location.x))) && (((rectangle.getLocation().y < (this.location.y + this.height)) && (rectangle.getLocation().y > this.location.y))))
			return true;
		if(((rectangle.getLocation().y + rectangle.getHeight()) < (this.location.y + this.height)) && ((rectangle.getLocation().y + rectangle.getHeight()) > this.location.y))  
			return true;
		if(((rectangle.getLocation().y - rectangle.getHeight()) < (this.location.y + this.height)) && ((rectangle.getLocation().y - rectangle.getHeight()) > this.location.y) && ((rectangle.getLocation().x + rectangle.getWidth() < (this.location.x + this.width)) && (rectangle.getLocation().x + rectangle.getWidth() > this.location.x))) 
			return true;
		if(((rectangle.getLocation().y + rectangle.getHeight()) < (this.location.y + this.height)) && ((rectangle.getLocation().y + rectangle.getHeight()) > this.location.y) && ((rectangle.getLocation().x - rectangle.getWidth() < (this.location.x + this.width)) && (rectangle.getLocation().x - rectangle.getWidth() > this.location.x))) 
			return true;
		return false;
	}


	@Override
	public String toString() {
		return "(" + this.location.x + ", " + this.location.y + ") w: " + this.width + " h: " + this.height; 
	}
}