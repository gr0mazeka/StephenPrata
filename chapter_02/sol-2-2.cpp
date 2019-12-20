//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 2.2 -------------------------

#include <iostream>
int converts(int f){ return f*220; }
int main()
{
    std::cout << "Enter furlongs: ";
    int fur;
    std::cin >> fur;
    std::cout << fur << " furlongs = "<< converts(fur) << " yards" << std::endl;
    return 0;
}
