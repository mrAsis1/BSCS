#include<iostream>
using namespace std;

int main()
{
    int n = 34;
    int most = 0;
    int maxCtr = 0;

    cout << n << endl;

    if(n / 100000000 == 0)
    {
        while(n > 0)
        {
            int temp = n;
            int ctr = 0;

            while(temp > 1)
            {
                if(temp % 2 == 0)
                    temp /= 2;
                else
                    temp = (3 * temp) + 1;
                ctr++;
            }

            if(ctr > maxCtr)
            {
                maxCtr = ctr;
                most = n;
            }

            n /= 10;
        }

        
        cout << most << " has the most Collatz sequence" << endl;
    }
    else
    {
        cout << "must be 8 dig" << endl;
    }

    return 0;

}
