public class PPrime{

	public static void main(String[] args){

		int Ctr2 = 0;

		
		for(int i = 2; i <= 100; i++)
		{
			int Ctr1 = 0;
			
			for(int j = 1; j <= i; j++)
			{
				if(i % j == 0)
				{
					Ctr1++;
				}

			}

			if(Ctr1 == 2)
			{
				System.out.print(i + "\t");
				Ctr2++;
			}

			if(Ctr2 == 5)
			{
				System.out.println();
				Ctr2 = 0;
			}
		}

	}
}