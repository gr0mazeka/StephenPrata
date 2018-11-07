//  ---------- S.Prata C++ Primer Plus 6th ed. ----------
//  ------------- Programming Exercises 3.2 -------------
/*
    Write a short program that asks for your height in feet and inches and your
    weight in pounds. (Use three variables to store the information.) Have the
    program report your body mass index (BMI). To calculate the BMI, first
    convert your height in feet and inches to your height in inches
    (1 foot = 12 inches). Then convert your height in inches to your height in
    meters by multiplying by 0.0254.Then convert your weight in pounds into your
    mass in kilograms by dividing by 2.2. Finally, compute your BMI by dividing
    your mass in kilograms by the square of your height in meters. Use symbolic
    constants to represent the various conversion factors.
*/
#include <iostream>
const int F_I = 12;         // 1 feet = 12 inches
const double K_P = 2.2;     // 1 kg = 2.2 pounds
const double I_M = 0.0254;  // 1 inch = 0.0254 meters
double bmi(int f, int i, int p);
int main()
{
    std::cout << "Enter your height in feet and inches.\n";
    std::cout << " feet: ";
    int feet;
    std::cin >> feet;
    std::cout << " inches: ";
    int inch;
    std::cin >> inch;
    std::cout << "Enter your weight in pounds: ";
    int pound;
    std::cin >> pound;
    std::cout << "Your BMI: " << bmi(feet, inch, pound) << std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}
double bmi(int f, int i, int p)
{
    double mtr = (i+f*F_I)*I_M;
    double kg = p/K_P;
    double bmi = kg/(mtr*mtr);
    return bmi;
}
