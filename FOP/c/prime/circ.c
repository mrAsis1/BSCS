#include <stdio.h>
#include <math.h>

int main() {
    int num = 197, ctr = 0, dig = 0;
    int num1 = num;

    while(num1 > 0)
    {
        dig++;
        num1 /= 10;
    }

    printf("%d\n",dig);
    int paw = pow(10,dig-1);
    printf("%d\n",paw);

    while(ctr != 3)
    {
        printf("%d\n",num);
        int temp = num / paw;
        num = (num % paw) * 10 + temp;
        ctr++;
    }

    return 0;
}
