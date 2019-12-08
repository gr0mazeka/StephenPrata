//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ----------------------- Programming Exercises 7.8.1 ------------------------

#include <iostream>
const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double*, int);
void show(double[], int);
int main()
{
    double expenses[Seasons];
    fill(expenses, Seasons);
    show(expenses, Seasons);
    return 0;
}
void fill(double *pa, int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa[i];
    }
}
void show(double da[], int n)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for(int i = 0; i < n; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << std::endl;
        total += da[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}
