#include <stdio.h>

/* Initializes array x of size s with random positive integers*/
void initArrayRandInt (int x[], int s);
/* Determines if integer x is an prime number, return 1 if prime 0 if
otherwise*/
int isPrime(int x);
/* Determines if integer x is an even greater than 4, return 1 if even 0 if
otherwise.*/
int isEven(int x);
/* Prints the Goldbach’s pair (1 pair only) of element(s) in array (if there
are any). Using the functions isPrime and isEven*/
void printGoldbachsPairInArray (int x[], int s);

int main()
{
    int x[10];
    int s = sizeof(x)/sizeof(x[0]); 

    return 0;
}

void initArrayRandInt (int x[], int s)
{
    
}