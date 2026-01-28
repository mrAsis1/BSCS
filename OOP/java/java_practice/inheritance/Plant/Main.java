public class Main {
    public static void main(String[] args) {
        
        Plant p = new Plant(100, 50);
        System.out.println("Plant Health: " + p.getHealth()); 
        System.out.println("Plant Sun Cost: " + p.getSunCost()); 
        
        p.receiveDamage(30);
        System.out.println("Plant Health after 30 damage: " + p.getHealth());
        
        p.receiveDamage(80);
        System.out.println("Plant Health after 80 damage: " + p.getHealth()); 

        SunProducer sp = new SunProducer(0, 0, 0);
        System.out.println("SunProducer Health: " + sp.getHealth()); 
        System.out.println("SunProducer Sun Cost: " + sp.getSunCost()); 
        System.out.println("SunProducer Sun Per Production: " + sp.getSunPerProduction());

        sp.receiveDamage(1);
        System.out.println("SunProducer Health after 50 damage: " + sp.getHealth()); 

        Shooter s = new Shooter(150,100);
        System.out.println("Shooter Health: " + s.getHealth()); 
        System.out.println("Shooter Sun Cost: " + s.getSunCost());
        System.out.println("Shooter ShootingRate: " + s.getShootingRate());
    }
}
