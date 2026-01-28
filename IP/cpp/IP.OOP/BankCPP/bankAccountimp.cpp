#include "bankAccount.h"
#include <iostream>

using namespace std;

bankAccount::~bankAccount()
{
}

bankAccount::bankAccount()
{
    accountNumber = 0;
    balance = 0;
}

bankAccount::bankAccount(int n, double b)
{
    accountNumber = n;
    balance = b;
}

void bankAccount::setAccountNumber(int n)
{
    accountNumber = n;
}

int bankAccount::getAccountNumber()
{
    return accountNumber;
}

double bankAccount::getBalance()
{
    return balance;
}
void bankAccount::depositMoney(double b)
{
    balance += b;
}

void bankAccount::withdrawMoney(double b)
{
    if(balance >= b)
        balance -= b;
}

void bankAccount::printAccInfo()
{
    cout << "Account Number : " << accountNumber << " Balance : " << balance << endl;
}
