// stonewt_11_05.cpp --for sol-11-05.cpp

#include "stonewt_11_05.h"
#include <iostream>
using std::cout;

Stonewt::Stonewt(double lbs)
{
        mode = STN;
        stone = int(lbs)/Lbs_per_stn;
        pds_left = int(lbs)% Lbs_per_stn + lbs - int(lbs);
        pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    mode = form;
    if(mode == STN || mode == ILBS || mode == FLBS)
    {
        stone = stn;
        pds_left = lbs;
        pounds = stn * Lbs_per_stn + lbs;
    }
    else
    {
        cout << "Incorrect 3rd argument to Stonewt() --- ";
        cout << "weight set to 0\n";
        stone = pds_left = pounds = 0;
        mode = STN;
    }
}
Stonewt::Stonewt()
{
    mode = STN;
    stone = pounds = pds_left = 0;
}
Stonewt Stonewt::operator+(const Stonewt & s) const
{
    return Stonewt(pounds + s.pounds);
}
Stonewt Stonewt::operator-(const Stonewt & s) const
{
    return Stonewt(pounds - s.pounds);
}
Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(pounds * n);
}
Stonewt operator*(double n, Stonewt & s)
{
    return Stonewt(s.pounds * n);
}
std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
    if(s.mode == Stonewt::STN)
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    else if(s.mode == Stonewt::ILBS)
        os << (int)s.pounds << " pounds\n";
    else if(s.mode == Stonewt::FLBS)
        os << s.pounds << " pounds\n";
    return os;
}
