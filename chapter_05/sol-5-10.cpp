//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.10 ------------------------

#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter number of rows: ";
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {		
        for (int a = i; a < row; a++)
            cout << '.';
        for (int b = i; b !=0; b--)
            cout << '*';
        cout << "\n";
    }
    return 0;
}
