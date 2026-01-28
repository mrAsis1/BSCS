#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 12340;
    string str; 

    int temp = n;

    while(temp > 0)
    {
        int dig = temp % 10;
        str += '0' + dig;
        temp /= 10; 
    }

    cout << str;
}