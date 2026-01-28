#include <stdio.h>

int main()
{
    int num = 500;  
    unsigned long long term = 0;  
    int ctr = 0;    

    for (int i = 1; ctr <= num; i++) {
        term += i; 
        ctr = 0;

        for (long long j = 1; j <= term; j++) {
            if (term % j == 0) {
                ctr++; 
            }
        }
    }

    printf("%d:%lld\n", num, term);

    return 0;
}