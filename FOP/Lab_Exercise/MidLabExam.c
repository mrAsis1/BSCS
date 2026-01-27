//proplem 3

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2;
    int con = 0, pal = 0;
    int con_ctr = 0, ctr = 0;
    int temp1 = 0, temp2 = 0, temp3 = 0;

    printf("A: ");
    scanf("%d", &num1);

    printf("B: ");
    scanf("%d", &num2);

    temp1 = num2;

    while(temp1 > 0)
    {
        ctr++;
        temp1 /= 10;
    }

    con = num1 * (pow(10,ctr)) + num2;
    printf("Concatenated: %d\n", con);

    temp2 = con;

    if (con / 100000000 == 0)
    {
        while(temp2 > 0)
        {
            pal = pal * 10;
            pal = temp2 %10 + pal;
            temp2 /= 10;
        }

        if(con == pal)
        {
            printf("Palindrome");
        }
        else
             printf("Not Palindrome");
    }
    else
    {
        printf("Concatenated exceed 8 digits");
    }

    return 0;
}

