#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED

class bankAccount
{
public:
    ~bankAccount();
    bankAccount();
    bankAccount(int n, double b);
    void setAccountNumber(int n);
    int getAccountNumber();
    double getBalance();
    void depositMoney(double b);
    void withdrawMoney(double b);
    void printAccInfo();

private:
    int accountNumber;
    double balance;

};

#endif // BANKACCOUNT_H_INCLUDED
