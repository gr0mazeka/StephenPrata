//  golf_10.h --for sol-10-03.cpp

#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
    private:
        static const int Len = 40;
        char fullname[Len];
        int handicap;
    public:
        Golf(const char *name = "", int hc = 0);
        int setgolf();
        void sethandicap(int hc);
        void showgolf() const;
};

#endif //  GOLF_H_
