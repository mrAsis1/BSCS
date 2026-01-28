#include <iostream>
#include <cmath>

using namespace std;

long long int intExp(int a, int b);
int digitSum (long long int x);
void storeLargestExpDigitSum (int x[], int s);
void dispExpDigitSum(int x[],int s);

int main()
{
    int s = 10;
    int arr[s];

   storeLargestExpDigitSum (arr, s);
   dispExpDigitSum(arr, s);

    return 0;
}

long long int intExp(int a, int b)
{
    long long n = 1;

    for(int i = 0; i < b; i++)
        n *= a;

    return n;
}

int digitSum (long long int x)
{
    int sum = 0;

    while(x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void storeLargestExpDigitSum(int x[], int s)
{
    for (int i = 0; i < s; i++)
    {
        int maxSum = 0;

        for (int j = 0; j <= 18; j++)
        {
            long long n = intExp(i, j);
            int sum = digitSum(n);

            if(i == j)
                sum = 0;

            if (maxSum < sum)
                maxSum = sum;
        }
        x[i] = maxSum;
    }
}

void dispExpDigitSum(int x[],int s)
{
    for(int i = 0; i < s; i++)
        cout << "Max digit sum for " << i << "^b: " << x[i] << endl;
}
