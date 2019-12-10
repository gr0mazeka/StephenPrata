//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 8.6 -------------------------

#include <iostream>
const int SIZE = 5;
template <typename T>
T max5(T*);
int main(void)
{
    int ar1[SIZE] = {1, 7, 5, 11, 9};
    double ar2[SIZE] = {1.3, 7.5, 9.5, 5.1, 9.3};
    std::cout << "ar1: " << max5(ar1) << "\nar2: " << max5(ar2) << std::endl;
    return 0;
}
template <typename T>
T max5(T *ar)
{
    T max = ar[0];
    for(int i = 0; i < SIZE; i++)
        if(max < ar[i]) max = ar[i];
    return max;
}

