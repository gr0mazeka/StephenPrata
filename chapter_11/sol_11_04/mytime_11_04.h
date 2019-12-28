// mytime_11_04.h --for sol-11-04.cpp

#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>

class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h, int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0, int m = 0);
        friend Time operator+(const Time & t1, const Time & t2);
        friend Time operator-(const Time & t1, const Time & t2);
        friend Time operator*(const Time & t, double n);
        friend Time operator*(double m, const Time & t){ return t*m; }
        friend std::ostream & operator<<(std::ostream & os, const Time & t);
};
#endif // MYTIME_H_
