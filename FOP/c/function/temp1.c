#include <stdio.h>

int isPal(int x);
void Pal(int x);
int isPerNUm(int x);
void per(int x);

int main()
{
    int x = 6;

    per(x);
    
    return 0;
}

int isPal(int x)
{
    int temp = x;
    int pal = 0;

    while(temp > 0)
    {
        pal *= 10;
        pal = pal + temp % 10;
        temp /= 10;
    }

    if(pal == x)
        return 1;
    else 
        return 0;
}

void Pal(int x)
{
    if(isPal(x))
        printf("Palindrome");
    else
        printf("Not Palindrome");  
}

int isPerNUm(int x)
{
    int ctr = 0;

    for(int i = 1; i <= x/2; i++)
    {
        if(x % i == 0)
        {
            ctr += i;
        }
    }

    if(ctr == x)
        return 1;
    else 
        return 0;

}

void per(int x)
{
    if(isPerNUm(x))
        printf("Perfect");
    else
        printf("Not Perfect");
}