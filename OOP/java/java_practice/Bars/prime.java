public class prime {

	public static void main(String[] args) {

		int prime[] = new int[100];
		int ctr = 0;

		prime[ctr++] = 2;

		for(int i = 2; i < 100; i++)
		{
			boolean isp = true;
			for(int j = 0; j < ctr; j++)
			{
				if(i % prime[j] == 0)
				{
					isp = false;
					break;
				}
			}

			if(isp)
			{
				System.out.println(i);
				prime[ctr++] = i;
			}
		}
	}
}