//  ---------- S.Prata C++ Primer Plus 6th ed. ----------
//  ------------- Programming Exercises 3.1 -------------
/*
    Write a short program that asks for your height in integer inches and then
    converts your height to feet and inches. Have the program use the underscore
    character to indicate where to type the response. Also use a const symbolic
    constant to represent the conversion factor.
*/
#include <iostream>
int main()
{
    const int INCH_FT = 12;     // 1 ft = 12 inches
    std::cout << "Enter your height in integer inches: ___\b\b\b";
    int height;
    std::cin >> height;
    int feet = height/INCH_FT;
    int inch = height%INCH_FT;
    std::cout << "Yur height is "<< feet << " feets and "<< inch << " inches\n";
    return 0;
}
