import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Disp d = new Disp();
        Math m = new Math();
        Scanner s = new Scanner(System.in);

        int n1, n2;
        String op;

        d.blank();
        System.out.println("Basic Calculator");

        System.out.print("Enter Number: ");
        n1 = s.nextInt();
        s.nextLine();

        System.out.print("Enter Operator: ");
        op = s.nextLine();

        System.out.print("Enter Number: ");
        n2 = s.nextInt();

        
        m.calQ(n1, n2, op);
    }
}
