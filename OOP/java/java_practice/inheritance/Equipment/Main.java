public class Main {
	
	public static void main(String[] args) {
		Weapon w = new Weapon("sword", 150.0 ,100);
		Armor a = new Armor("shield", 100.0, 75);

		System.out.println(w.getName() + " " + w.getPrice() + " " + w.getDamage());
		System.out.println(a.getName() + " " + a.getPrice() + " " + a.getDefence());
	}
}