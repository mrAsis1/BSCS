#include <stdio.h>

 int main()
 {
     int s, r;
     int sum = 0;
     int total = 0;

     printf("s:");
     scanf("%d",&s);

     printf("r:");
     scanf("%d",&r);

     printf("Numbers: ");

     for (int j = s; j <= r; j++)
         printf("%d,",j);

     printf("\nDigit Sum: ");

     for (int i = s; i <= r; i++)
     {
         int temp = i;
         sum=0;

         while(temp>0)
         {
             int dig = 0;
             dig = temp % 10;
             sum += dig;
             temp/=10;

         }
         printf("%d",sum);

         if (i != r)
         printf(",");

         total += sum;
     }
     printf("\nTotal: %d",total);
     return 0;
 }
