#include <iostream>
using namespace std;

bool isPrime(int x);
bool isEven(int x);
void printGoldbachsPair(int x);
void printWaringTrio(int x);

int main()
{
    int x;
    cin >> x;

    printGoldbachsPair(x);
    printWaringTrio(x);

}

bool isPrime(int x)
{
    for(int i = 2; i*i <= x; i++)
    {
        if(x % 2 == 0)
            return 0;
    }
    return 1;
}

bool isEven(int x)
{
    if(x % 2 == 0 && x > 4)
        return 1;
    return 0;
}

void printGoldbachsPair(int x)
{
    if(isEven(x))
    {
        cout << x << " = ";
        for(int i = 3; i <= x; i++)
        {
            if(isPrime(i) && i % 2 != 0)
            {
                for(int j = 3; j <= x; j++)
                {
                    if(isPrime(j) && j % 2 != 0)
                    {
                        if(i + j == x)
                            cout << i << " + " << j << ", ";
                    }
                }
            }
        }
    }
}

void printWaringTrio(int x)
{
    if(!isEven(x))
    {
        cout << x << " = ";
        for(int i = 2; i <= x; i++)
        {
            if(isPrime(i))
            {
                for(int j = i; j <= x; j++)
                {
                    if(isPrime(j))
                    {
                        for(int k = j; k <= x; k++)
                        {
                            if(isPrime(k))
                            {
                                if(i + j + k == x)
                                    cout << i << " + " << j << " + "<< k << ", ";
                            }
                        }
                    }
                }
            }
        }
    }
}





