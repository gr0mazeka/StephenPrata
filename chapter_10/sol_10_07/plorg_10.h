//  plorg_10.h --for sol-10-07.cpp

#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
    private:
        static const int Len = 19;
        char fullname[Len];
        int ci;
    public:
        Plorg(const char *name = "Plorga", int i = 50);
        void show() const;
        void changeCI(int i);
};

#endif //  PLORG_H_
