//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.5 -------------------------
/*
    The CandyBar structure contains three members.The first member holds the
    brand name of a candy bar.The second member holds the weight (which may have
    a fractional part) of the candy bar, and the third member holds the number
    of calories (an integer value) in the candy bar.Write a program that
    declares such a structure and creates a CandyBar variable called snack,
    initializing its members to "Mocha Munch", 2.3, and 350, respectively.The
    initialization should be part of the declaration for snack. Finally, the
    program should display the contents of the snack variable.
*/
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
