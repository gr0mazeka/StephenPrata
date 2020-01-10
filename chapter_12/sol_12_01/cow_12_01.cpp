// cow_12_01.cpp --for sol-12-01.cpp

#include "cow_12_01.h"
#include <cstring>
#include <iostream>

Cow::Cow()
{
    hobby = new char[1];
    hobby[0] = '\0';
    name[0] = '\0';
    weight = 0;
}
Cow::Cow(const char * nm, const char * ho, double wt)
{
    hobby = new char[std::strlen(ho) + 1];
    std::strcpy(hobby, ho);
    std::strcpy(name, nm);
    weight = wt;
}
Cow::Cow(const Cow & c)
{
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    std::strcpy(name, c.name);
    weight = c.weight;
}
Cow::~Cow()
{
    delete [] hobby;
}
Cow & Cow::operator=(const Cow & c)
{
    if(this == &c)
        return *this;
    delete [] hobby;
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    std::strcpy(name, c.name);
    weight = c.weight;
    return *this;
}
void Cow::ShowCow() const
{
    std::cout << " Name: " << name << "\n Hobby: " << hobby
              << "\n Weight: " << weight << '\n';
}
