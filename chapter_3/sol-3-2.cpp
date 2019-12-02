//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 3.2 -------------------------

#include <iostream>
const int INCH_FT = 12;             // 1 ft = 12 inches
const double POUND_KG = 2.2;        // 1 kg = 2.2 pounds
const double METER_INCH = 0.0254;   // 1 inch = 0.0254 meters
double bmi(int f, int i, int p);
int main()
{
    std::cout << "Enter your height in feet and inches.\n";
    std::cout << " feet: ";
    int ft, inch, pound;
    std::cin >> ft;
    std::cout << " inches: ";
    std::cin >> inch;
    std::cout << "Enter your weight in pounds: ";
    std::cin >> pound;
    std::cout << "Your BMI: " << bmi(ft, inch, pound) << std::endl;
    return 0;
}
double bmi(int f, int i, int p)
{
    double mtr = (i+f*INCH_FT)*METER_INCH;
    double kg = p/POUND_KG;
    double bmi = kg/(mtr*mtr);
    return bmi;
}
