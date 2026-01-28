#include <iostream>
#include "bankAccount.h"
#include "checkingAccount.h"

using namespace std;

int main()
{
    bankAccount b(123,100);
    //b.setAccountNumber(1);
    //cout << b.getAccountNumber();
    //cout << b.getBalace();
    //b.printAccInfo();
    b.depositMoney(100.5);
    //b.printAccInfo();
    b.withdrawMoney(50);
    b.printAccInfo();

    cout << endl;

    checkingAccount ca(231, 150, 10, 50, 25);
    ca.printAccInfo();
    return 0;
}
