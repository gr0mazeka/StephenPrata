// cow_12_01.h --for sol-12-01.cpp

#ifndef COW_H_
#define COW_H_

class Cow
{
private:
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow &);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const;
};
#endif // COW_H_
