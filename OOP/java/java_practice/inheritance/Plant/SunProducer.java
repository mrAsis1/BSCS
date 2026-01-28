public class SunProducer extends Plant {
	private int sunPerProduction;

	public SunProducer(int health, int sunCost, int sunPerProduction) {
		super((health > 0) ? health : 1, (sunCost > 0) ? sunCost : 1);
		this.sunPerProduction = (sunPerProduction > 0) ? sunPerProduction : 1;
	}

	public int getSunPerProduction() {
		return this.sunPerProduction;
	}
} 