// complex_11_07.h --for sol-11-07.cpp

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

class Complex
{
    private:
        double cA;
        double cB;
    public:
        Complex();
        Complex(double a, double b);
        ~Complex(){}
        Complex operator+(const Complex & c) const;
        Complex operator-(const Complex & c) const;
        Complex operator~();
        Complex operator*(double n) const;
        Complex operator*(const Complex & c) const;
        friend Complex operator*(double n, const Complex & c);
        friend std::ostream & operator<<(std::ostream & os, const Complex & s);
        friend std::istream & operator>>(std::istream & is, Complex & c);
};
#endif // COMPLEX_H_
