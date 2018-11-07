//  ---------- S.Prata C++ Primer Plus 6th ed. ----------
//  ------------- Programming Exercises 3.1 -------------
/*
    Write a short program that asks for your height in integer inches and then
    converts your height to feet and inches. Have the program use the underscore
    character to indicate where to type the response. Also use a const symbolic
    constant to represent the conversion factor.
*/
#include <iostream>
const int FT = 12;  // feet = 12 inches
void convert(int i);
int main()
{
    std::cout << "Enter your heit in integer inches: ___\b\b\b";
    int inch;
    std::cin >> inch;
    convert(inch);
    std::cin.get();
    std::cin.get();
    return 0;
}
void convert(int i)
{
    int feet = i/FT;
    int inch = i%FT;
    std::cout << "Yur height is "<< feet << " feets and "<< inch << " inches\n";
}
