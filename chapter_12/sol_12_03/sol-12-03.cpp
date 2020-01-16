//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ----------------------- Programming Exercises 12.3 -------------------------

#include "stock_12_03.h"
#include <iostream>
const int STKS = 4;

int main(void)
{
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Object", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };
    std::cout << "Stock holdings:\n";
    int st;
    for(st = 0; st < STKS; st++)
        std::cout << stocks[st];
    const Stock *top = &stocks[0];
    for(st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);
    std::cout << "\nMost valuable holding:\n" << *top;
    return 0;
}
