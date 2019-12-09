//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 8.2 -------------------------

#include <iostream>
#include <cstring>
const int SIZE = 20;
struct CandyBar
{
    char name[SIZE];
    double weight;
    int cal;
};
void fill
    (CandyBar &, const char *str="Millennium Munch", double w=2.85, int c=350);
void display(const CandyBar &);
int main(void)
{
    CandyBar test;
    fill(test);
    display(test);
    fill(test, "Gold Star", 3.15, 410);
    display(test);
    return 0;
}
void fill(CandyBar &candy, const char *str, double w, int c)
{
    strcpy(candy.name, str);
    candy.weight = w;
    candy.cal = c;
}
void display(const CandyBar &candy)
{
    std::cout << "\nName:     " << candy.name
              << "\nWeight:   " << candy.weight
              << "\nCalories: " << candy.cal << std::endl;
}
