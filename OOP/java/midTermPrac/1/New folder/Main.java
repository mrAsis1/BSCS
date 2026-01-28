public class Main {
	
	public static void main(String[] args) {

		Polygon p1 = new Polygon();
		System.out.println(p1.computePerimeter());

		Polygon p2 = new Polygon();
		System.out.println(p2.computeArea());

		Polygon p3 = new Polygon();
		System.out.println(p3.getNumberOfSides());

		Polygon p4 = new Polygon(new Point(1,1), new Point(2,2), new Point(-1, -5));
		p4.addVertex(new Point(0,0));
		System.out.println(p4.computePerimeter());
		System.out.println(p4.computeArea());
		System.out.println(p4.getNumberOfSides());
		p4.removeVertex(new Point(2,2));
		System.out.println("After removing...");
		System.out.println(p4.computePerimeter());
		System.out.println(p4.computeArea());
		System.out.println(p4.getNumberOfSides());
	}
}