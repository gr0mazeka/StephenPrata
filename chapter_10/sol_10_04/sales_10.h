//  sales_10.h --for sol-9-04.cpp

#ifndef SALES_H_
#define SALES_H_

namespace SALES
{
   class Sales
   {
    private:
       enum { QUARTERS = 4 };
       double sales[QUARTERS]{};
       double average;
       double s_max;
       double s_min;
    public:
        Sales(){ s_max = s_min = average = 0; }
        Sales(const double ar[], int n);
        void setSales();
        void showSales() const;
   };

}  // namespace SALES

#endif  // SALES_H_
