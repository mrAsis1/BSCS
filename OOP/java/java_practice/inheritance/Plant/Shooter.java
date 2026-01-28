public class Shooter extends Plant {
	private int shootingRate;

	public Shooter(int sunCost, int shootingRate) {
		super(300,(sunCost > 0) ? sunCost : 1);
		this.shootingRate = (shootingRate > 0) ? shootingRate : 1;
	}

	public int getShootingRate() {
		return this.shootingRate;
	}
}