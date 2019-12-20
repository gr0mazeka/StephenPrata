//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.5 -------------------------

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    const int YEAR = 12;
    const int CNT = 3;
    string month[YEAR] =
        {"January", "February", "March", "April", "May", "June", "July",
         "August", "September", "October", "November", "December"};
    int sale[CNT][YEAR], sum[CNT] = {0}, total = 0;
    for(int i = 0; i < CNT; i++)
    {
        cout << "Year " << i+1 << endl;
        for(int j = 0; j < YEAR; j++)
        {
            cout << "Sales for " << month[j] << ": ";
            cin >> sale[i][j];
            sum[i] += sale[i][j];
        }
        total += sum[i];
    }
    for(int i = 0; i < CNT; i++)
        cout << i+1 << " year Sum = " << sum[i] << endl;
    cout << "Total = " << total << endl;
    return 0;
}
