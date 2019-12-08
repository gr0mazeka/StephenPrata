//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ----------------------- Programming Exercises 7.8.2 ------------------------

#include <iostream>
const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct expenses { double value[Seasons]; };
void fill(expenses*);
void show(expenses);
int main()
{
    expenses exp;
    fill(&exp);
    show(exp);
    return 0;
}
void fill(expenses *pa)
{
    for(int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa->value[i];
    }
}
void show(expenses da)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da.value[i] << std::endl;
        total += da.value[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}
