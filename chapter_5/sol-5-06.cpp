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
    int sale[CNT][YEAR], sum[CNT] = {0}, total = 0, i;
    for(i = 0; i < CNT; i++)
    {
        cout << "Year " << i+1 << endl;
        for(int m = 0; m < YEAR; m++)
        {
            cout << "Sales for " << month[m] << ": ";
            cin >> sale[i][m];
            sum[i] += sale[i][m];
        }
        total += sum[i];
    }
    for(i = 0; i < CNT; i++)
        cout << i+1 << " year Sum = " << sum[i] << "\n";
    cout << "Total = " << total << endl;
    return 0;
}
