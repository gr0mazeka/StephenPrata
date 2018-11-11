//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.1 -------------------------

#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter two integers.\n First: ";
    int a, b, c = 0;
    cin >> a;
    cout << " Second: ";
    cin >> b;
    for(; a <= b; a++)
        c += a;
    cout <<"Sum of all the integers "<< a <<" through "<< b <<" = "<< c << endl;
    return 0;
}
