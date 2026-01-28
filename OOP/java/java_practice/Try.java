import java.util.Scanner;

public class Try
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		System.out.print("input number: ");
		double n1 = input.nextDouble();

		System.out.print("input number: ");
		double n2 = input.nextDouble();

		System.out.print("input operator(+,-,*,/): ");
		char operator = input.next().charAt(0);
		
		double result = 0;

		switch(operator)
		{		
			case '+':
				result = n1 + n2;
			break;
			case '-':
				result = n1 - n2;
			break;
			case '*':
				result = n1 * n2;
			break;
			case '/':
				result = n1 / n2;
			break;
			default:
				System.out.println("buang ka");
		}
		
		System.out.println("The Total is: " + result);

	}

}
