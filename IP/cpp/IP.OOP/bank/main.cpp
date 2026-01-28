#include <iostream>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "savingsAccount.h"

using namespace std;

int main()
{
    cout << "=========== BANK ACCOUNT ===========" << endl;
    bankAccount bank(1001, 500.0);
    bank.deposit(100);
    bank.withdraw(200);
    bank.printInfo();

    cout << "\n========= CHECKING ACCOUNT =========" << endl;
    checkingAccount checkAcc(0.02, 300.0, 15.0, 1002, 400.0);
    checkAcc.withdraw(350);
    checkAcc.checkBal();
    checkAcc.printCheckAccInfo();

    cout << "\n========= SAVINGS ACCOUNT ==========" << endl;
    savingsAccount saveAcc(0.05, 1003, 1000.0);
    saveAcc.withdraw(200);
    saveAcc.printSaveInfo();

    return 0;
}
