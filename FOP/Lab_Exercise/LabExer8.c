#include <stdio.h>

/* Initializes array x of size s with s number of pentagonal numbers. Max
limit of s is 30.
*/
void initPetagonalNumOnArr (int x[], int s);
/* Display the content of array x of size
*/
void dispArr (int x[], int s);
/* Returns 1 if x is Prime, 0 if otherwise
*/
int isPrime (int x);
/*
Checks if the sequence of array x is a petagonal sequence. Then print the
items that are pentagonal prime. Using function isPrime(int x)
*/
void dispPentagonalPrimeInArr(int x[], int s);

int main ()
{
    int x[30];
    int s = sizeof(x)/sizeof(x[0]);

    initPetagonalNumOnArr (x,s);
    dispArr (x,s);
    dispPentagonalPrimeInArr (x,s);

    return 0;
}

void initPetagonalNumOnArr (int x[], int s)
{
    for(int i = 1; i <= s; i++)
            x[i-1] = (i*(3*i-1))/2;
}

void dispArr(int x[], int s)
{
    printf("Pentagonal Numbers: ");
        for (int i=0;i<s;i++)
            printf("%d,",x[i]);
}

int isPrime(int x)
{
    for(int i = 2; i < x/2; i++)
    {
        if(x%i==0)
            return 0;
    }
        return 1;
}

void dispPentagonalPrimeInArr(int x[], int s)
{
    printf("\nPentagonal Prime Array: ");
    for(int i = 0; i < s; i++)
        {
            if(isPrime(x[i])== 1)
                    printf("%d," ,x[i]);
        }
}



