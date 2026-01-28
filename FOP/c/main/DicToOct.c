#include <stdio.h>

int main()
{
    int num = 784;
    int quo, rem;

    if (num == 0)
    {
        printf("Octal representation: 0\n");
        return 0;
    }

    printf("Octal representation: ");

    while (num > 0)
    {
        quo = num / 8;        
        rem = num % 8;       

        printf("%d", rem);

        num = quo;           
    }

    printf("\n");

    return 0;
}
