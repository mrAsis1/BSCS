#include <stdio.h>

void initPetagonalNumOnArr(int x[], int s);
void dispArr(int x[], int s);
int isPrime(int x);
void dispPentagonalArr(int x[], int s);


int main()
{
    int x[15];
    int s = sizeof(x)/sizeof(x[0]);

    initPetagonalNumOnArr(x, s);
    dispArr(x, s);
    dispPentagonalArr(x, s);

    return 0;
}

void initPetagonalNumOnArr(int x[], int s)
{
    for(int i = 1; i <= s; i++)
        x[i-1] = i*(3*i-1)/2;
}

void dispArr(int x[], int s)
{   
    printf("Pentagonal Numbers: ");
    for(int i = 0; i < s; i++)
        printf("%d ", x[i]);
    printf("\n");
}

int isPrime(int x)
{
    if(x <= 1)
        return 0;
    for(int i = 2; i < x/2; i++)
    {
        if(x % i == 0)
            return 0;
    }
    return 1;
}
void dispPentagonalArr(int x[], int s)
{
    printf("Pentagonal Prime: ");
    for(int i = 0; i < s; i++)
    {
        if(isPrime(x[i])==1)
            printf("%d ", x[i]);
    }
}