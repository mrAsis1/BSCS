public class Armor extends Equipment {
	public int defence;

	public Armor(String name, double price, int defence) {
		super(name, price);
		this.defence = defence;
	}

	public int getDefence() {
		return this.defence;
	}
}