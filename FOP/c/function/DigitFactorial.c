#include <stdio.h>

int getFactorial(int x);
int sumX(int num);
int isDigitFactorial(int num);

int main()
{
    int num;
    num = 145;
    printf("%d", isDigitFactorial(num));
}

int isDigitFactorial(int num)
{
    int sum = sumX(num);
    if(sum == num)
        return 1;
    else
        return 0;
}

int sumX(int num)
{
    int sum = 0;
    while(num > 0)
    {
        int digit = num%10;
        sum += getFactorial(digit);
        num = num / 10;
    }
    return sum;
}
int getFactorial(int num)
{
    int factorial = 1;
    while(num > 0)
    {
        factorial = factorial * num;
        num--;
    }
    return factorial;
}
