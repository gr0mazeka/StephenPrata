//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 8.7 -------------------------

#include <iostream>
template <typename T> T SumArray(T arr[], int);
template <typename T> T SumArray(T *arr[], int);
struct debts
{
    char name[50];
    double amount;
};
int main(void)
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double *pd[3];
    for(int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    std::cout << "Total number of things:\n" << SumArray(things, 6) << "\n";
    std::cout << "Total sum of all debts:\n" << SumArray(pd, 3) << "\n";
    return 0;
}
template <typename T> T SumArray(T arr[], int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}
template <typename T> T SumArray(T *arr[], int n)
{
    T sum = 0.0;
    for(int i = 0; i < n; i++)
        sum += *arr[i];
    return sum;
}
