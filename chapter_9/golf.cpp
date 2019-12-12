#include "golf.h"
#include <iostream>
#include <cstring>

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}
int setgolf(golf &g)
{
    std::cout << "Enter full name: ";
    char tmp[Len];
    std::cin.get(tmp, Len);
    if(tmp[0] == '\0')
    {
        std::cin.clear();
        return 0;
    }
    while(std::cin.get() != '\n')
        continue;
    strcpy(g.fullname, tmp);
    std::cout << "Enter handicap: ";
    (std::cin >> g.handicap).get();
    return 1;
}
void handicap(golf &g, int hc)
{
    g.handicap = hc;
}
void showgolf(const golf &g)
{
    std::cout << "Name: " << g.fullname
              << "\nhandicap: " << g.handicap << std::endl;
}
