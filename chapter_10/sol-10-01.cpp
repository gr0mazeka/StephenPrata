#include "bank_account.h"

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
