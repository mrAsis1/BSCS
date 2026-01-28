public class test {
	
	public static void main(String[] args) {

		Pacman main = new Pacman(20.5, 15.80, 3, 3, 2.0);
Pellet[] pellets = new Pellet[3];
pellets[0] = new Pellet(20,11,1,1,5);
pellets[1] = new Pellet(11.5,7.8,3,3,3);
pellets[2] = new Pellet(14.2,12.7,0.4,0.4,8);

System.out.println(main);
for(Pellet p : pellets)
    System.out.println(p + ((p.isVisible)? " can be eaten.":" is not visible."));
System.out.println();

for(int i=0; i < 4; i++)
{
    main.moveUp();
    for(Pellet p : pellets)
        main.eat(p);
    System.out.println(main);
    for(Pellet p : pellets)
        System.out.println(p + ((p.isVisible)? " can be eaten.":" is not visible."));
    System.out.println();
}

for(int i=0; i < 3; i++)
{
    main.moveLeft();
    for(Pellet p : pellets)
        main.eat(p);
    System.out.println(main);
    for(Pellet p : pellets)
        System.out.println(p + ((p.isVisible)? " can be eaten.":" is not visible."));
    System.out.println();
}

main.moveDown();
for(Pellet p : pellets)
    main.eat(p);
System.out.println(main);
for(Pellet p : pellets)
    System.out.println(p + ((p.isVisible)? " can be eaten.":" is not visible."));
System.out.println();
	}
}