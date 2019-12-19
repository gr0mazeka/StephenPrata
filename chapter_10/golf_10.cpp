//  golf_10.cpp --for sol-10-03.cpp

#include "golf_10.h"
#include <iostream>
#include <cstring>

Golf::Golf(const char *name, int hc)
{
    strncpy(fullname, name, Len-1);
    fullname[Len-1] = '\0';
    handicap = hc;
}
int Golf::setgolf()
{
    char str[Len];
    int hand;
    std::cout << "Enter full name: ";
    std::cin.get(str, Len);
    if(str[0] == '\0')
    {
        std::cin.clear();
        return 0;
    }
    while(std::cin.get() != '\n')
        continue;
    std::cout << "Enter handicap: ";
    (std::cin >> hand).get();
    Golf tmp {str, hand};
    *this = tmp;
    return 1;
}
void Golf::sethandicap(int hc)
{
    handicap = hc;
}
void Golf::showgolf() const
{
    std::cout << "Name: " << fullname
              << "\nhandicap: " << handicap << std::endl;
}
