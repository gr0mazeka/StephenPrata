//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.1 -------------------------

#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter two integers.\n 1: ";
    int a, b, c = 0;
    cin >> a;
    cout << " 2: ";
    cin >> b;
    for(int i = a; i <= b; i++)
        c += i;
    cout << "Sum of all the integers from " << a << " through " << b << " is "
         << c << endl;
    return 0;
}
