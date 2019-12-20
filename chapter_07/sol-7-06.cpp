//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 7.6 -------------------------

#include <iostream>
const int SIZE = 10;
int Fill_array(double*, int);
void Reverse_array(double*, int);
void Show_array(const double*, int);
int main()
{
    double arr[SIZE];
    int size = Fill_array(arr, SIZE);
    Show_array(arr, size);
    Reverse_array(arr, size);
    Show_array(arr, size);
    return 0;
}
int Fill_array(double *ar, int n)
{
    int i;
    double temp;
    std::cout << "Enter up to " << n << " values (q to quit):\n";
    for(i = 0; i < n; i++)
    {
        std::cout << "Value #" << (i + 1) << ": ";
        std::cin >> temp;
        if(!std::cin) break;
        ar[i] = temp;
    }
    return i;
}
void Reverse_array(double *ar, int n)
{
    double tmp;
    for(int j = 1, i = n-2; j < i; --i, ++j)
    {
        tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;
    }
}
void Show_array(const double *ar, int n)
{
    std::cout << "Array: ";
    for(int i = 0; i < n; i++)
        std::cout << ar[i] << " ";
    std::cout << std::endl;
}
