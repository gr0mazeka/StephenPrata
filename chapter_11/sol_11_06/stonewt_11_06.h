// stonewt_11_06.h --for sol-11-06.cpp

#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();
        ~Stonewt(){};
        void show_lbs() const;
        void show_stn() const;
        friend bool operator>(const Stonewt & s1, const Stonewt & s2);
        friend bool operator<(const Stonewt & s1, const Stonewt & s2);
        friend bool operator>=(const Stonewt & s1, const Stonewt & s2);
        friend bool operator<=(const Stonewt & s1, const Stonewt & s2);
        friend bool operator==(const Stonewt & s1, const Stonewt & s2);
        friend bool operator!=(const Stonewt & s1, const Stonewt & s2);
};
#endif // STONEWT_H_
