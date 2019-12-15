//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 9.4 -------------------------

#include "sales.h"

int main(void)
{
    SALES::Sales sal1;
    SALES::setSales(sal1);
    SALES::showSales(sal1);
    double ar[3] = {120.2, 302.5, 177.3};
    SALES::Sales sal2;
    SALES::setSales(sal2, ar, 3);
    SALES::showSales(sal2);
    return 0;
}

