public class TestAnimal {
	public static void main(String[] args) {

		Fish d = new Fish();
        Cat c = new Cat("Fluffy");
        Animal a = new Fish();
        Animal e = new Spider();
        Pet p = new Cat("Whiskers");

        System.out.println("========== A ==========");
        System.out.println("-------- Fish ---------");
        d.setName("Fishhy");
        System.out.println("Name: " + d.getName());
        d.play();
        d.walk();
        d.eat();

        System.out.println();

        System.out.println("--------- Cat ----------");
        System.out.println("Name: " + c.getName());
        c.play();
        c.walk();
        c.eat();

        System.out.println();

        p.setName("Mimi");
        System.out.println("Name: " + p.getName());
        p.play();

        System.out.println();

        System.out.println("--------- Spider ---------");
        e.walk();
        e.eat();

        System.out.println();
        System.out.println("======== B =========");
        System.out.println();

        if (p instanceof Cat) {
            Cat catP = (Cat) p;
            catP.setName("lalay");
            System.out.println("Name: " + catP.getName());
            catP.play();
            catP.walk();
            catP.eat();
        }

        System.out.println();
        System.out.println("======== C =========");
        System.out.println();

        Animal[] animals = {d, c, a, e, (Animal)p};
        for (int i = 0; i < animals.length; i++) {
            if(animals[i] instanceof Animal) {
                System.out.println("------------------");
                animals[i].walk();
                animals[i].eat();
            }
        }
        System.out.println("------------------");

        System.out.println();
        System.out.println("======== D =========");
        System.out.println();
        
        Cat c1 = new Cat("SuperCat") { 
            @Override
            public void walk() {
                super.walk();
                System.out.println("Cat strutting confidently.");
            }
        };
        c1.walk();

	}
}