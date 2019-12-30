//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ----------------------- Programming Exercises 11.5 -------------------------

#include "stonewt_11_05.h"
#include <iostream>

using std::cout;
void display(const Stonewt & st, int n);
int main(void)
{
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);
    cout << "The celebrity weighed " << incognito;
    cout << "The detective weighed " << wolfe;
    cout << "The President weighed " << taft;
    incognito = 276.8;
    taft = 325;
    cout << "After dinner, the celebrity weighed " << taft;
    cout << "Celebrity + Detective: " << incognito + wolfe;
    cout << "President - Detective: " << taft - wolfe;
    cout << "Detective * 5: " <<  wolfe * 5;
    cout << "3 * Celebrity: " <<  3 * incognito;
    incognito.setStnMode();
    cout << "Celebrity Stone mode: " << incognito;
    incognito.setIntMode();
    cout << "Celebrity Int mode: " << incognito;
    incognito.setFloatMode();
    cout << "Celebrity Float mode: " << incognito;
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
    return 0;
}
void display(const Stonewt & st, int n)
{
    for(int i = 0; i < n; i++)
        cout << "Wow! " << st;
}
