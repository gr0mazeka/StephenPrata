//  bank_account.h --for sol-10-01.cpp

#ifndef BANK_ACCOUNT_H_
#define BANK_ACCOUNT_H_

#include <string>

class BankAccount
{
    private:
        std::string name;
        std::string acctnum;
        double balance;
    public:
        BankAccount(const std::string &client,
                        const std::string &num, double bal = 0.0);
        void show(void) const;
        void deposit(double cash);
        void withdraw(double cash);
};

#endif  //  BANK_ACCOUNT_H_
