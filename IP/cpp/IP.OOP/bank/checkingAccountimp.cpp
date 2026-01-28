#include "checkingAccount.h"
#include <iostream>

using namespace std;

void checkingAccount::setIntRate(double i)
{
    intRate = i;
}

double checkingAccount::getIntRate()
{
    return intRate;
}

void checkingAccount::setMinBal(double m)
{
    minBal = m;
}

double checkingAccount::getMinBal()
{
    return minBal;
}

void checkingAccount::setSerCharge(double s)
{
    serCharge = s;
}

double checkingAccount::getSerCharge()
{
    return serCharge;
}

double checkingAccount::postInt()
{
    return getAccBal() + getAccBal() * intRate;
}

void checkingAccount::checkBal()
{
    if(getAccBal() < minBal)
        cout << "Your Account Balance is less than Minimum Balance" << endl;
    cout << "Your Account Balance is grater or equal to Minimum Balance" << endl;
}

void checkingAccount::check()
{
    cout << "Checked" << endl;
}

void checkingAccount::withdraw(double n)
{
    if(getAccBal() >= n)
        bankAccount::withdraw(n);
}

void checkingAccount::printCheckAccInfo()
{
    bankAccount::printInfo();
    cout << "Interest Rate : " << intRate << endl;
    cout << "Minimum Balance : " << minBal << endl;
    cout << "Service Charge : " << serCharge << endl;
}

checkingAccount::~checkingAccount()
{

}

checkingAccount::checkingAccount(): bankAccount(0,0)
{
    intRate = 0;
    minBal = 0;
    serCharge = 0;
}

checkingAccount::checkingAccount(double i, double m, double s, int n, double b) : bankAccount(n, b)
{
    intRate = i;
    minBal = m;
    serCharge = s;
}
