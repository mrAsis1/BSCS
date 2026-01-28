#include <stdio.h>

int main()
{
    int n = 12345;
    int temp = 0;

    printf("%d ", n);
    while(n > 0)
    {
        temp = n % 10;
        printf("temp %d \n", temp);
        n = n / 10;
        printf("n %d ", n);
    }
    return 0;
}
