public class Line {
    private Point p1 = new Point();
    private Point p2 = new Point();

    public Line(Point p1, Point p2) {
        this.p1 = p1;
        this.p2 = p2;
    }

    public Point getMidPoint() {
        return new Point(((p1.getX() + p2.getX()) / 2),(((p1.getY() + p2.getY()) / 2 )));
    }

    public double computeLength() { 
        double l = 0;
        double a = p2.getX() - p1.getX();
        double b = p2.getY() - p1.getY();

        a *= a;
        b *= b;

        if(a < 0)
            a *= -1;
        if(b < 0)
            b *= -1;

        l = a + b;

        return Math.sqrt(l);
    }

    public double computeSlope() {
        double l = 0;  
        double dem = p2.getY() - p1.getY();
        double num = p2.getX() - p1.getX();

        if(dem == 0)
            dem = 8;

        l = dem / num;

        return l;
    }
}
