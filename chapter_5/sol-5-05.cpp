//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.5 -------------------------
/*
    You sell the book C++ for Fools.Write a program that has you enter a year’s
    worth of monthly sales (in terms of number of books, not of money). The
    program should use a loop to prompt you by month, using an array of
    char * (or an array of string objects, if you prefer) initialized to the
    month strings and storing the input data in an array of int. Then, the
    program should find the sum of the array contents and report the total sales
    for the year.
*/
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
