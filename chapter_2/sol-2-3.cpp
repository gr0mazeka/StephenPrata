//  ---------- S.Prata C++ Primer Plus 6th ed. ----------
//  ------------- Programming Exercises 2.3 -------------
/*
    Write a C++ program that uses three user-defined functions (counting main()
    as one) and produces the following output:
        Three blind mice
        Three blind mice
        See how they run
        See how they run
    One function, called two times, should produce the first two lines, and the
    remaining function, also called twice, should produce the remaining output.
*/
#include <iostream>
void func_1(){ std::cout << "Three blind mice" << std::endl; }
void func_2(){ std::cout << "See how they run" << std::endl; }
int main()
{
    func_1();
    func_1();
    func_2();
    func_2();
    return 0;
}
