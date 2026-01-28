#include <iostream>

double fRecursive(int n);

int main()
{
    for (int i = 1; i < 5; i++)
    {
        std::cout << fRecursive(i) << ",";
    }
    //std::cout fRecursive()
}

double fRecursive(int n)
{
    if(n < 2)
    {
        return 1;
    }
    else
    {
        return (1/static_cast<double>(n*fRecursive(n-1)));
    }
}
