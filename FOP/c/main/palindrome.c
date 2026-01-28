#include <stdio.h>

int main()
{
    int num;
    int rev = 0;

    scanf("%d",&num);

    int temp = num;
    
    while(num>0)
    {
        rev = rev * 10;
        rev = rev + num % 10;
        num /= 10;
    }

    // printf("%d",rev);

    if ( rev == temp )
        printf("palindrome");
    
    else
    
        printf("not palindrome");

    return 0;
}