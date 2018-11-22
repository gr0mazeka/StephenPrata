//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 7.4 -------------------------

#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    double total, choices, meganum, limit;
    cout << "Enter the total number of choices on the game card and\n"
         << "the number of picks allowed:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "Enter the total number of choices on the game card and\n"
             << "the number of picks allowed for the Mega Number:\n";
        if((cin >> limit >> meganum) && meganum <= limit);
        {
            cout << "You have one chance in ";
            cout << probability(total, choices) * probability(limit, meganum);
            cout << " of winning. \n";
        }
        cout << "Next two numbers(q to quit): ";
    }
    cout << "bye\n";
    return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}
