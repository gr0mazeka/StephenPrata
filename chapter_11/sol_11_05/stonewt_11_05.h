// stonewt_11_05.h --for sol-11-05.cpp

#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
    public:
        enum Mode {STN = 1, ILBS = 2, FLBS = 3};
    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
        Mode mode;
    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs, Mode form = STN);
        Stonewt();
        ~Stonewt(){};
        void setStnMode(){ mode = STN; }
        void setIntMode(){ mode = ILBS; }
        void setFloatMode(){ mode = FLBS; }
        Stonewt operator+(const Stonewt & s) const;
        Stonewt operator-(const Stonewt & s) const;
        Stonewt operator*(double n) const;
        friend Stonewt operator*(double n, Stonewt & s);
        friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};
#endif // STONEWT_H_
