//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 8.6 -------------------------

#include <iostream>
#include <cstring>
template <typename T> T maxn(T ar[], int);
template <> const char* maxn(const char* ar[], int);
int main(void)
{
    int ar1[6] = {1, 7, 5, 11, 9, 3};
    double ar2[4] = {1.3, 7.5, 9.5, 5.1};
    const char* ar3[5] = {"Fiat", "Honda", "Ferrari", "Volvo", "Bugatti"};
    std::cout << "ar1: "   << maxn(ar1, 6)
              << "\nar2: " << maxn(ar2, 4)
              << "\nar3: " << maxn(ar3, 5) << std::endl;
    return 0;
}
template <typename T> T maxn(T ar[], int n)
{
    T max = ar[0];
    for(int i = 0; i < n; i++)
        if(max < ar[i]) max = ar[i];
    return max;
}
template <> const char* maxn(const char* ar[], int n)
{
    const char* str = ar[0];
    for(int i = 0; i < n; i++)
        if(strlen(str) < strlen(ar[i])) str = ar[i];
    return str;
}
