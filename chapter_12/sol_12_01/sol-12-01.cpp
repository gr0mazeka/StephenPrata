//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ----------------------- Programming Exercises 12.1 -------------------------

#include "cow_12_01.h"
#include <iostream>

int main(void)
{
    Cow test1;
    Cow test2("Ann", "Tennis", 117);
    Cow * test = new Cow("Peter", "Hockey", 127);
    std::cout <<  "test: \n";
    test->ShowCow();
    std::cout << "test1: \n";
    test1.ShowCow();
    std::cout << "test2: \n";
    test2.ShowCow();
    Cow test3(test2);
    std::cout << "test3: \n";
    test3.ShowCow();
    Cow test4 = test3;
    std::cout << "test4: \n";
    test4.ShowCow();
    delete test;
    return 0;
}
