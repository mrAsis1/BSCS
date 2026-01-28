#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // float reff = 0;
    // float r;
    // int m;

    // cout << "Annual interest rate (%): ";
    // cin >> r;

    // cout << "Number of interest conversions per year: ";
    // cin >> m;

    // reff = pow(1+(r / (100 * m)),m )-1;

    // cout << "Effective interest rate is " << reff * 100 << " %";

    int n = 1538;
    int a, b, c, d, e, f, g, h = 0;
    // a1000, b500, c100, d50, e20, f10, g5, h1

    a = n / 1000;
    b = n % 1000 / 500;
    c = n % 1000 % 500 / 100;
    d = n % 1000 % 500 % 100 / 50;
    e = n % 1000 % 500 % 100 % 50 / 20;
    f = n % 1000 % 500 % 100 % 50 % 20 / 10;
    g = n % 1000 % 500 % 100 % 50 % 20 % 10 / 5;
    h = n % 1000 % 500 % 100 % 50 % 20 % 10 % 5 / 1;

    cout << a << ":1000, " << b << ":500, " << c << ":100, " 
    << d << ":50, " << e << ":20, " << f << ":10, " 
    << g << ":5, " << h << ":1, ";

    return 0;
}