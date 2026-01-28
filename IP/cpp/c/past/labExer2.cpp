#include <iostream>
using namespace std;

int main()
{
    int pal = 0;
    int temp, flag;

    for(int i = 35; i <= 100; i++)
    {
        temp = i; 
        flag = 1;
        pal = 0;

        while(temp > 0)
        {
            pal *= 10;
            pal = pal + temp % 10;
            temp /= 10;
        }

        if(pal == i)
        {
            for(int j = 2; j * j <= pal; j++)
            {
                if(pal % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag)
            {
                cout << i << ",";
            }
        }
    }
    return 0;
}

