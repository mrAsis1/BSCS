#include <stdio.h>

int sumis(int num1, int num2)
{
    int sumof = num1 + num2;

    return sumof; 
}


int main()
{   
    int num1 = 5;
    int num2 = 10;

    int sum = sumis(num1, num2);

    printf("the sum is %d ", sum); 

    return 0;
}