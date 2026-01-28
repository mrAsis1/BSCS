public class TestArrays {

	public static void main(String[] args) {

		// using simple array

		int[] array1;
		int[] array2;

		array1 = new int[]{2,3,5,7,11,13,19};


		printArray(array1);
		System.out.println();
		
		array2 = array1;

		for(int i = 0; i < array2.length; i++)
		{
			if(i % 2 == 0)
				array2[i] =  i;
		}

		printArray(array1);
		System.out.println();

		System.out.println();

		// using multi-dimentional array

		int[][] matrix;

		matrix = new int[5][];

		for(int i = 0; i < matrix.length; i++)
		{
			matrix[i] = new int[i];
			for(int j = 0; j < matrix[i].length; j++)
			{
				matrix[i][j] = i * j;
			}
		}

		for (int i = 0; i < matrix.length; i++) 
		{
   			System.out.print("matrix[" + i + "] is ");
   			printArray(matrix[i]);
   			System.out.println();
   		}

	}

	public static void printArray(int[] array) {

	System.out.print('<');

		for (int i = 0; i < array.length; i++) {

			// print an element
			System.out.print(array[i]);

			// print a comma delimiter if not the last element
			if ((i + 1) < array.length) {
			System.out.print(", ");
			}
		}
		System.out.print('>');
	}
}