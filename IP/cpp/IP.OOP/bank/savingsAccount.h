#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED
#include "bankAccount.h"

class savingsAccount : public bankAccount
{
    public:
        void setIntRate(double);
        double getIntRate();
        double postIntRate();
        void withdraw(double n);
        void printSaveInfo();
        ~savingsAccount();
        savingsAccount();
        savingsAccount(double, int, double);

    private:
        double intRate;
};


#endif // SAVINGSACCOUNT_H_INCLUDED
