//  ---------- S.Prata C++ Primer Plus 6th ed. ----------
//  ------------- Programming Exercises 2.4 -------------
/*
    Write a program that asks the user to enter his or her age. The program then
    should display the age in months:
    Enter your age: 29
    Your age in months is 384.
*/
#include <iostream>
int converts(int a){ return a*12; }
int main()
{
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    std::cout << "Your age in months is " << converts(age) << std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}
