#include <stdio.h>

int fOfx(int x);

int main()
{
    int x = 1;
    int y;
    
    y = fOfx(x);
    printf("%d ", y);
}

int fOfx(int x)
{
    if(x >= 1)
        return 5 + x;
    else if(-2 <= x && x <1)
        return 2;
    else if(x < -2)
        return 1 - x * x;
}