public class Car{

	public String color;
	public boolean canStart = false;

	public Car(String color){
		this.color = color; 
		System.out.println("your car color is " + color);
	}


	public void Start(){
		this.canStart = true;
		System.out.println("your car just start");
	}
	
}