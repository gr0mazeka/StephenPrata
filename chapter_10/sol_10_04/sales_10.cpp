//  sales_10.cpp --for sol-9-04.cpp

#include "sales_10.h"
#include <iostream>

namespace SALES
{
    Sales::Sales(const double ar[], int n)
    {
        double max, min, total = .0;
        for(int i = 0; i < QUARTERS; i++)
        {
            if(n > i) sales[i] = ar[i];
            else sales[i] = .0;
            total += sales[i];
        }
        max = min = sales[0];
        for(int i = 0; i < n && i < QUARTERS; i++)
        {
            if(max < sales[i]) max = sales[i];
            if(min > sales[i]) min = sales[i];
        }
        s_max = max;
        s_min = min;
        average = (n < QUARTERS) ? total/n : total/QUARTERS;
    }
    void Sales::setSales()
    {
        double arr[QUARTERS];
        for(int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Enter sales #" << i+1 << ": ";
            std::cin >> arr[i];
        }
        Sales tmp(arr, QUARTERS);
        *this = tmp;
    }
    void Sales::showSales() const
    {
        for(int i = 0; i < QUARTERS; i++)
            std::cout << "sales #" << i+1 << ": " << sales[i] << std::endl;
        std::cout << "average: " << average << "\n"
                  << "max:     " << s_max << "\n"
                  << "min:     " << s_min << std::endl;
    }
}   // namespace SALES
