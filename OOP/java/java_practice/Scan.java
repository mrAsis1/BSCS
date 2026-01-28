import java.util.Scanner;

public class Scan{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        System.out.print("Input a number: ");
        int num = s.nextInt();

        System.out.print("You Enter " + num);

    }

}