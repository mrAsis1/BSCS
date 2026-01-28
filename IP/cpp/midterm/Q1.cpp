#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int fact = n;
    int digSum = 0;

    cout << n << " ";

    if (n > 12)
        return 0;

    for(int i = n-1; i >= 1; i--)
    {
        fact *= i;
    }

    cout << fact << " ";


    while(fact > 0)
    {

        digSum += fact % 10;
        fact /= 10;
    }

    cout << digSum << endl;

    return 0;
}
