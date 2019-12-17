//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 10.2 ------------------------

#include "person.h"
#include <iostream>

int main(void)
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    one.FormalShow();
    std::cout << std::endl;
    two.Show();
    two.FormalShow();
    std::cout << std::endl;
    three.Show();
    three.FormalShow();
    return 0;
}
