#include <iostream>
using namespace std;

int main()
{
    int ctr;
    int temp;

    for(int i = 10; i <= 100; i++)
    {
        ctr = 0;
        temp = i;

        while(temp > 1)
        {
            if(temp % 2 == 0)
                temp /= 2;
            else
                temp = (temp * 3) + 1;
            ctr++;
        }
        cout << i << ":" << ctr << endl;
    }
    return 0;
}