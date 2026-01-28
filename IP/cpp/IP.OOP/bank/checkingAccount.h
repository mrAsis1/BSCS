#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED
#include "bankAccount.h"

class checkingAccount : public bankAccount
{
    public:
        void setIntRate(double);
        double getIntRate();
        void setMinBal(double);
        double getMinBal();
        void setSerCharge(double);
        double getSerCharge();
        double postInt();
        void checkBal();
        void check();
        void withdraw(double);
        void printCheckAccInfo();
        ~checkingAccount();
        checkingAccount();
        checkingAccount(double, double, double, int, double);

    private:
        double intRate;
        double minBal;
        double serCharge;
};

#endif // CHECKINGACCOUNT_H_INCLUDED
