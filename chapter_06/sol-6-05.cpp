//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 6.5 -------------------------

#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter tvarps (negative number or non-numeric for quit): ";
    int tvp;
    cin >> tvp;
    while(cin && tvp >= 0)
    {
        if(tvp <= 5000)
            cout << "tax = " << 0 << endl;
        else if(5000 < tvp && tvp <= 15000)
            cout << "tax = " << (tvp-5000)*0.1 << endl;
        else if(15000 < tvp && tvp <= 35000)
            cout << "tax = " << 10000*0.1+(tvp-15000)*0.15 << endl;
        else if(tvp > 35000)
            cout << "tax = " << 10000*0.1+20000*0.15+(tvp-35000)*0.2 << endl;
        cout << "Next: ";
        cin >> tvp;
    }
    return 0;
}
