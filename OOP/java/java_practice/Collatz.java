public class Collatz{
	public static void main(String[] args){

		int n = 17;
	
		while(n > 1)
		{
			System.out.print(n + ", ");
			if(n % 2 == 0)
				n = n / 2;
			else
				n = 3*n+1;
		}
	}
}