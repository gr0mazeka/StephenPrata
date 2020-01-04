// complex_11_07.cpp --for sol-11-07.cpp

#include "complex_11_07.h"
#include <iostream>

Complex::Complex()
{
    cA = cB = 0;
}
Complex::Complex(double r, double i)
{
    cA = r;
    cB = i;
}
Complex Complex::operator+(const Complex & c) const
{
    return Complex(cA+c.cA, cB+c.cB);
}
Complex Complex::operator-(const Complex & c) const
{
    return Complex(cA-c.cA, cB-c.cB);
}
Complex Complex::operator*(const Complex & c) const
{
    return Complex((cA*c.cA-cB*c.cB), (cA*c.cB+cB*c.cA));
}
Complex Complex::operator~() const
{
    return Complex(cA, -cB);
}
Complex Complex::operator*(double n) const
{
    return Complex(cA*n, cB*n);
}
Complex operator*(double n, const Complex & c)
{
    return c * n;
}
std::ostream & operator<<(std::ostream & os, const Complex & c)
{
    os << "(" << c.cA << ", " << c.cB << "i)";
    return os;
}
std::istream & operator>>(std::istream & is, Complex & c)
{
    std::cout << "real: ";
    if(is >> c.cA)
    {
        std::cout << "imaginary: ";
        is >> c.cB;
    }
    return is;
}
