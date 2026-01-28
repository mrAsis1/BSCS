#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED
#include "bankAccount.h"

class checkingAccount : bankAccount
{
public:
    ~checkingAccount();
    checkingAccount();
    checkingAccount(int n, double b, double i, double m, double s);
    void setInterestRate(double i);
    double getInterestRate();
    void setMinimumBalance(double m);
    double getMinimumBalance();
    void setServiceCharge(double s);
    double getServiceCharge();
    double postInterest();
    bool verifyBalance();
    void check();
    void withdrawMoney(double b);
    void printAccInfo();

private:
    double interestRate;
    double minimunBalance;
    double serviceCharge;
};


#endif // CHECKINGACCOUNT_H_INCLUDED
