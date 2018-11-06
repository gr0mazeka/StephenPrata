//  ---------- S.Prata C++ Primer Plus 6th ed. ----------
//  ------------- Programming Exercises 2.2 -------------
/*
    Write a C++ program that asks for a distance in furlongs and converts it to 
    yards. (One furlong is 220 yards.)
 */
#include <iostream>
int converts(int f){ return f*220; }
int main()
{
    std::cout << "Enter furlongs: ";
    int fur;
    std::cin >> fur;
    std::cout << fur << " furlongs = "<< converts(fur) << " yards" << std::endl;
    std::cin.get();
    return 0;
}
