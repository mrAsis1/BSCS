// Point class
public class Point {
    public double x;
    public double y;

    public Point() {
        this(0, 0);
    }

    public Point(Point p) {
        this.x = p.x;
        this.y = p.y;
    }

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    @Override
    public String toString() {
        return "(" + x + ", " + y + ")";
    }
}

// Rectangle class
class Rectangle {
    private double width;
    private double height;
    private Point location;

    public Rectangle(double x, double y, double width, double height) {
        this.location = new Point(x, y);
        this.width = width;
        this.height = height;
    }

    public Rectangle(Rectangle r) {
        this.location = new Point(r.location);
        this.width = r.width;
        this.height = r.height;
    }

    public Point getLocation() {
        return location;
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

    public void setHeight(double height) {
        this.height = height;
    }

    public boolean contains(Point point) {
        return point.x >= location.x && point.x <= location.x + width &&
               point.y >= location.y && point.y <= location.y + height;
    }

    public boolean collidesWith(Rectangle rectangle) {
        return !(location.x + width < rectangle.location.x ||
                 rectangle.location.x + rectangle.width < location.x ||
                 location.y + height < rectangle.location.y ||
                 rectangle.location.y + rectangle.height < location.y);
    }

    @Override
    public String toString() {
        return "Rectangle at " + location + " with width " + width + " and height " + height;
    }
}

// Pellet class
class Pellet {
    private Rectangle dimension;
    public int score;
    public boolean isVisible;

    public Pellet(double x, double y, double width, double height, int score) {
        this.dimension = new Rectangle(x, y, width, height);
        this.score = score;
        this.isVisible = true;
    }

    public Rectangle getDimension() {
        return dimension;
    }

    @Override
    public String toString() {
        return "Pellet at " + dimension.getLocation() + " with score " + score;
    }
}

// Pacman class
class Pacman {
    private double stride;
    private int totalScore;
    private Rectangle dimension;

    public Pacman(double startX, double startY, double width, double height, double stride) {
        this.dimension = new Rectangle(startX, startY, width, height);
        this.stride = stride;
        this.totalScore = 0;
    }

    public Rectangle getDimension() {
        return dimension;
    }

    public int getTotalScore() {
        return totalScore;
    }

    public boolean eat(Pellet pellet) {
        if (dimension.collidesWith(pellet.getDimension()) && pellet.isVisible) {
            totalScore += pellet.score;
            pellet.isVisible = false; // Mark pellet as eaten
            return true;
        }
        return false;
    }

    public void moveUp() {
        dimension.setLocation(dimension.getLocation().x, dimension.getLocation().y - stride);
    }

    public void moveDown() {
        dimension.setLocation(dimension.getLocation().x, dimension.getLocation().y + stride);
    }

    public void moveLeft() {
        dimension.setLocation(dimension.getLocation().x - stride, dimension.getLocation().y);
    }

    public void moveRight() {
        dimension.setLocation(dimension.getLocation().x + stride, dimension.getLocation().y);
    }

    @Override
    public String toString() {
        return "Pacman at " + dimension.getLocation() + " with score " + totalScore;
    }
}

// Main class to test
public class Main {
    public static void main(String[] args) {
        Pacman pacman = new Pacman(2,6,4,4,2);
        System.out.println(pacman);
    }
}
