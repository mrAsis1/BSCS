public class Weapon extends Equipment {
	private int damage;

	public Weapon(String name, double price, int damage) {
		super(name, price);
		this.damage = damage;
	}

	public int getDamage() {
		return this.damage;
	}
}