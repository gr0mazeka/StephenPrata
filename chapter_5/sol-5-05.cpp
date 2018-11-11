//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.5 -------------------------

#include <iostream>
#include <string>
int main()
{
    const int YEAR = 12;
    std::string month[YEAR] {
        "January", "February", "March", "April", "May", "June", "July",
        "August", "September", "October", "November", "December" };
    int sale[YEAR], sum = 0;
    for(int i = 0; i < YEAR; i++)
    {
        std::cout << "Sales for " << month[i] << ": ";
        std::cin >> sale[i];
        sum += sale[i];
    }
    std::cout << " Sum = " << sum << "\n";
    return 0;
}
