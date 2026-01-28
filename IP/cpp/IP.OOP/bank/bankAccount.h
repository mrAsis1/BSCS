#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED

class bankAccount
{
    public:
        void setAccNum(double);
        double getAccNum();
        double getAccBal();
        void deposit(double);
        void withdraw(double);
        void printInfo();
        ~bankAccount();
        bankAccount();
        bankAccount(double, double);

    private:
        int accNum;
        double accBal;
};

#endif // BANKACCOUNT_H_INCLUDED
