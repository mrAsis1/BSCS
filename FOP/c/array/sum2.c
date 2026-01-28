#include <stdio.h>

int main()
{
    int num1[5] = {1,2,3,4,5};
    int num2[5] = {6,7,8,9,10};

    for(int i = 0; i < 5; i++)
    {
        printf("%d + %d = %d\t", num1[i], num2[i], num1[i] + num2[i]);
        printf("%d - %d = %d\t", num1[i], num2[i], num1[i] - num2[i]);
        printf("%d - %d = %d\t", num2[i], num1[i], num2[i] - num1[i]);
        printf("%d * %d = %d\t", num1[i], num2[i], num1[i] * num2[i]);
        printf("%d / %d = %d\t", num1[i], num2[i], num1[i] / num2[i]);
        printf("%d / %d = %d\t", num2[i], num1[i], num2[i] / num1[i]);
        printf("\n");
    }

    return 0;
}