public class NumCount {

	public static void main(String[] args) {

		int[] arr = {-12,3,-12,4,1,1,-12,1,-1,1,2,3,4,2,3,-12};

		for(int i = 0; i < arr.length; i++)
		{
			for(int j = i+1; j < arr.length; j++)
			{
				if(arr[j] > arr[i])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}

		System.out.println("N\tCount");

		for(int i = 0; i < arr.length; i++)
		{
			int ctr = 0;
			for(int j = 0; j < arr.length; j++)
			{
				if(arr[j] == arr[i])
					ctr++;
			}
			
			if(i < arr.length - 1 && arr[i] == arr[i + 1])
				continue;
			else 
				System.out.println(arr[i] + "\t" + ctr);
		}
	}	
}