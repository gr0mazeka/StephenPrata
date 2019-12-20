//  plorg_10.cpp --for sol-10-07.cpp

#include "plorg_10.h"
#include <iostream>
#include <cstring>

Plorg::Plorg(const char *name, int i)
{
    strncpy(fullname, name, Len);
    fullname[Len-1] = '\0';
    ci = i;
}
void Plorg::show() const
{
    std::cout << "Plorg\n name: " << fullname << "\n CI: " << ci << "\n";
}
void Plorg::changeCI(int i)
{
    ci = i;
}
