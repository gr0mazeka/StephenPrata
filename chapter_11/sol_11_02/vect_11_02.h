// vect_11_02.h --for sol-11-02.cpp

#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>

namespace VECTOR
{
class Vector
{
    public:
        enum Mode {RECT, POL};
    private:
        double x;
        double y;
        Mode mode;
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;}
        double yval() const {return y;}
        double magval() const;
        double angval() const;
        void polar_mode();
        void rect_mode();
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
};
} // namespace VECTOR
#endif // VECTOR_H_
