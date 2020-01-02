//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ----------------------- Programming Exercises 11.6 -------------------------

#include "stonewt_11_06.h"
#include <iostream>

int main(void)
{
    const int SIZE = 6;
    Stonewt arr[SIZE] = {141, 275, 7};
    Stonewt s11(11);
    int min, max, count;
    double pounds;
    for(int i = 3; i < SIZE; i++)
    {
        std::cout << "Enter pound: ";
        std::cin >> pounds;
        arr[i] = pounds;
    }
    min = max = count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(arr[min] > arr[i]) min = i;
        if(arr[max] < arr[i]) max = i;
        if(arr[i] >= s11) count++;
    }
    std::cout << "The objects >= 11 pounds: " << count << "\n";
    std::cout << "Max object: ";
    arr[max].show_lbs();
    std::cout << "Min object: ";
    arr[min].show_lbs();
    return 0;
}
