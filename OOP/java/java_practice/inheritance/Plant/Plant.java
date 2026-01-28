public class Plant {
	private int health;
	private int sunCost;

	public Plant(int health, int sunCost) {
		this.health = health;
		this.sunCost = sunCost;
	}

	public int getHealth() {
		return this.health;
	}

	public int getSunCost() {
		return this.sunCost;
	}

	public void receiveDamage(int damage) {
		this.health -= damage;
		if(this.health < 0)
			this.health = 0;
	}
}