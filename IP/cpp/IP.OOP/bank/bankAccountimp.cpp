#include "bankAccount.h"
#include <iostream>

using namespace std;

void bankAccount::setAccNum(double n)
{
    accNum = n;
}

double bankAccount::getAccNum()
{
    return accNum;
}

double bankAccount::getAccBal()
{
    return accBal;
}

void bankAccount::deposit(double n)
{
    accBal += n;
}

void bankAccount::withdraw(double n)
{
    accBal -= n;
}

void bankAccount::printInfo()
{
    cout << "Account Number : " << accNum << endl;
    cout << "Account Balance : " << accBal << endl;
}

bankAccount::~bankAccount()
{

}

bankAccount::bankAccount()
{
    accNum = 0;
    accBal = 0;
}

bankAccount::bankAccount(double n, double b)
{
    accNum = n;
    accBal = b;
}
