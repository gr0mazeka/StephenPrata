//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 10.1 ------------------------

#include "bank_10.h"

int main(void)
{
    BankAccount test {"Client", "test"};
    test.show();
    test.deposit(1000);
    test.show();
    test.withdraw(300);
    test.show();
    return 0;
}
