#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

int main ()
{
    char A[SIZE];
    char B[SIZE] = {0};
    int n = 0;

    time_t t;
    srand((unsigned) time(&t));

    printf("array A:\n");
    for(int i = 0; i < SIZE; i++)
    {
        A[i] = rand() % 256;
        printf("%c ",A[i]);
    }
    printf("\n");

    printf("array B:\n");
    for(int i = 0; i < SIZE; i++)
    {
        if((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
        {
            B[n] = A[i];
             n++;
        }
    }

    for(int i = 0; i < SIZE; i++)
    {
        printf("%c ",B[i]);
    }


   return 0;
}
