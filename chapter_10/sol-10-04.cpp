//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 10.4 ------------------------

#include "sales_10.h"

int main(void)
{
    SALES::Sales sal1;
    sal1.setSales();
    sal1.showSales();
    double ar[3] = {120.2, 302.5, 177.3};
    SALES::Sales sal2(ar, 3);
    sal2.showSales();
    return 0;
}

