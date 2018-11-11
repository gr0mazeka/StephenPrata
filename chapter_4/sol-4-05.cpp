//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.5 -------------------------

#include <iostream>
struct CandyBar
{
    char brand[20];
    float weight;
    int cal;
};
int main()
{
    CandyBar snack { "Mocha Munch", 2.3, 350 };
    std::cout << "Struct snack\n Brand name: " << snack.brand << "\n Weight: "
              << snack.weight << "\n Calores: " << snack.cal << std::endl;
    return 0;
}
