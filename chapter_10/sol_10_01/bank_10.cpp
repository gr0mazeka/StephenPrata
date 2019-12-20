//  bank_10.cpp --for sol-10-01.cpp

#include "bank_10.h"
#include <iostream>

BankAccount::BankAccount(const std::string &client, const std::string &num, double bal)
{
    name = client;
    acctnum =  num;
    if(bal < 0)
    {
        std::cout << "Number of ballance can't be negative; balance set to 0.\n";
        balance = .0;
    }
    else
        balance = bal;
}
void BankAccount::show(void) const
{
    std::cout << "Name:   " << name
            << "\naccount: " << acctnum
            << "\nbalance: " << balance << std::endl;
}
void BankAccount::deposit(double cash)
{
    if(cash < 0)
        std::cout << "Number of deposit can't be negative. "
                  << "Transaction is aborted.\n";
    else
        balance += cash;
}
void BankAccount::withdraw(double cash)
{
    if(cash < 0)
        std::cout << "Number of withdraw can't be negative. "
                  << "Transaction is aborted.\n";
    else if(cash > balance)
        std::cout << "You can't withdraw more than you have! "
                  << "Transaction is aborted.\n";
    else
        balance -= cash;
}
