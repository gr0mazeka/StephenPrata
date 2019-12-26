// vect_11_02.cpp --for sol-11-02.cpp

#include <cmath>
#include "vect_11_02.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;
namespace VECTOR
{
    const double Rad_to_deg = 45.0/atan(1.0);
    Vector::Vector()
    {
        x = y = 0.0;
        mode = RECT;
    }
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if(form == POL)
        {
            x = n1 * cos(n2/Rad_to_deg);
            y = n1 * sin(n2/Rad_to_deg);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = 0.0;
            mode = RECT;
        }
    }
    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if(form == POL)
        {
            x = n1 * cos(n2/Rad_to_deg);
            y = n1 * sin(n2/Rad_to_deg);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
             x = y = 0.0;
             mode = RECT;
        }
    }
    Vector::~Vector()
    {
    }
    void Vector::polar_mode()
    {
        mode = POL;
    }
    void Vector::rect_mode()
    {
        mode = RECT;
    }
    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }
    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }
    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }
    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if(v.mode == Vector::RECT)
            os << "(x, y) = (" << v.x << ", " << v.y << ")";
        else if(v.mode == Vector::POL)
            os <<"(m, a) = (" << v.magval()<<", "<< v.angval()*Rad_to_deg <<")";
        else
            os << "Vector object mode is invalid";
        return os;
    }
    double Vector::magval() const
    {
        return sqrt(x*x+y*y);
    }
    double Vector::angval() const
    {
        return (x == 0.0 && y == 0.0) ? 0.0 : atan2(y, x);
    }
} // namespace VECTOR
