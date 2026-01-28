import java.util.*;

public class Polygon {
    public List<Point> vertices;

    public Polygon() {
        vertices = new ArrayList<Point>();
        vertices.add(new Point(0, 0));
        vertices.add(new Point(1, 1));
        vertices.add(new Point(1, 0));
    }

    public Polygon(Point p1, Point p2, Point p3) {
        vertices = new ArrayList<Point>();
        vertices.add(p1);
        vertices.add(p2);
        vertices.add(p3);
    }

public double computePerimeter() {
    
    double sum = 0;

    for(int i = 0; i < vertices.size(); i++)
    {
        Line l;
        if(i != vertices.size() - 1)
            l = new Line(new Point(vertices.get(i).getX(), vertices.get(i).getY()), new Point(vertices.get(i + 1).getX(), vertices.get(i + 1).getY()));
        else
            l = new Line(new Point(vertices.get(i).getX(), vertices.get(i).getY()), new Point(vertices.get(0).getX(), vertices.get(0).getY()));
        sum += l.computeLength();
    }
    return sum;
}

    public double computeArea() {

    double sum1 = 0;
    double sum2 = 0;
    int n = vertices.size();

    for(int i = 0; i <= n - 2; i++)
    {
        sum1 += vertices.get(i).getX() * vertices.get(i + 1).getY();
        sum2 += vertices.get(i + 1).getX() * vertices.get(i).getY();
    }

    double sum = sum1 - sum2;
    double temp = sum + ((vertices.get(n - 1).getX() * vertices.get(0).getY()) - (vertices.get(0).getX() * vertices.get(n - 1).getY()));
    temp /= 2;

    return Math.abs(temp);
}

    public void addVertex(Point vertex) {
        vertices.add(vertex);
    }

    public boolean removeVertex(Point vertex) {
        for (int i = 0; i < vertices.size(); i++) 
        {
            if (vertices.get(i).getX() == vertex.getX() && vertices.get(i).getY() == vertex.getY()) 
            {
                vertices.remove(i);
                return true;
            }
        }
        return false;
    }

    public int getNumberOfSides() {
        return vertices.size();
    }
}
