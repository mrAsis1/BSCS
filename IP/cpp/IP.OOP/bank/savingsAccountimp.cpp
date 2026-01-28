#include "savingsAccount.h"
#include <iostream>

using namespace std;

void savingsAccount::setIntRate(double i)
{
    intRate = i;
}

double savingsAccount::getIntRate()
{
    return intRate;
}

double savingsAccount::postIntRate()
{
    return getAccBal() + getAccBal() * intRate;
}

void savingsAccount::withdraw(double n)
{
    if(getAccBal() >= n)
        bankAccount::withdraw(n);
}

void savingsAccount::printSaveInfo()
{
    printInfo();
    cout << "Interest Rate : " << intRate << endl;
}

savingsAccount::~savingsAccount()
{

}

savingsAccount::savingsAccount():bankAccount(0,0)
{
    intRate = 0;
}

savingsAccount::savingsAccount(double r, int n, double b):bankAccount(n,b)
{
    intRate = r;
}
