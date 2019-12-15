//  sales.cpp --for sol-9-04.cpp

#include "sales.h"
#include <iostream>

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        double max, min, total = .0;
        for(int i = 0; i < QUARTERS; i++)
        {
            if(n > i) s.sales[i] = ar[i];
            else s.sales[i] = .0;
            total += s.sales[i];
        }
        max = min = s.sales[0];
        for(int i = 0; i < n && i < QUARTERS; i++)
        {
            if(max < s.sales[i]) max = s.sales[i];
            if(min > s.sales[i]) min = s.sales[i];
        }
        s.max = max;
        s.min = min;
        s.average = (n < QUARTERS) ? total/n : total/QUARTERS;
    }
    void setSales(Sales & s)
    {
        double max, min, total = .0;
        for(int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Enter sales #" << i+1 << ": ";
            std::cin >> s.sales[i];
            total += s.sales[i];
        }
        max = min = s.sales[0];
        for(int i = 0; i < QUARTERS; i++)
        {
            if(max < s.sales[i]) max = s.sales[i];
            if(min > s.sales[i]) min = s.sales[i];
        }
        s.average = total/QUARTERS;
        s.max = max;
        s.min = min;
    }
    void showSales(const Sales & s)
    {
        for(int i = 0; i < QUARTERS; i++)
            std::cout << "sales #" << i+1 << ": " << s.sales[i] << std::endl;
        std::cout << "average: " << s.average << "\n"
                  << "max:     " << s.max << "\n"
                  << "min:     " << s.min << std::endl;
    }
}   // namespace SALES
