#include "checkingAccount.h"
#include <iostream>

using namespace std;

checkingAccount::~checkingAccount()
{
}

checkingAccount::checkingAccount():bankAccount::bankAccount()
{

}

checkingAccount::checkingAccount(int n, double b, double i, double m, double s):bankAccount::bankAccount(n, b)
{
    interestRate = i;
    minimunBalance = m;
    serviceCharge = s;
}
void checkingAccount::setInterestRate(double i)
{
    interestRate = i;
}

double checkingAccount::getInterestRate()
{
    return interestRate;
}

void checkingAccount::setMinimumBalance(double m)
{
    minimunBalance = m;
}

double checkingAccount::getMinimumBalance()
{
    return minimunBalance;
}

void checkingAccount::setServiceCharge(double s)
{
    serviceCharge = s;
}

double checkingAccount::getServiceCharge()
{
    return serviceCharge;
}

double checkingAccount::postInterest()
{
    if(bankAccount::getBalance() >= minimunBalance)
        return bankAccount::getBalance() + bankAccount::getBalance() * (interestRate/100);
    else
        return bankAccount::getBalance() - serviceCharge;
}

bool checkingAccount::verifyBalance()
{
    if(bankAccount::getBalance() < minimunBalance)
        return true;
    else
        return false;
}

void checkingAccount::check()
{
    cout << "checked" << endl;
}

void checkingAccount::withdrawMoney(double b)
{
    if(!verifyBalance())
    {
        bankAccount::withdrawMoney(b);
    }
}

void checkingAccount::printAccInfo()
{
    bankAccount::printAccInfo();
    cout << "Interest Rate : " << interestRate
         << " Minimum Balance : " << minimunBalance
         << " Service Charge : " << serviceCharge << endl;
}
