#include <stdio.h>

int main()
{
    int num;
    int temp;
    int rev;
    int sum;

    rev = 0;
    sum = 0;

    scanf("%d",&num);

    temp = num;

    for(int i = num; num > 0; i++)
    {
        rev = rev * 10;
        rev = num % 10 + rev;
        sum += num % 10;
        num = num / 10;
    }

    if ( rev == temp)
        printf("palindrome");
    else
        printf("not palindrome");

    printf("\nthe sum is %d",sum);

    return 0;
}