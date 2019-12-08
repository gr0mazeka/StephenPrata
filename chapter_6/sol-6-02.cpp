//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 6.2 -------------------------

#include <iostream>
int main()
{
    using namespace std;
    const int SIZE = 10;
    double arr[SIZE];
    double donat, sum = 0.0;
    int cnt = 0, i = 0;
    cout << "Enter donation values: ";
    for(; i < SIZE && cin >> donat; i++)
    {
        arr[i] = donat;
        sum += donat;
        cout << "Enter donation values: ";
    }
    if (i != 0)
    {
        double avr = sum/i;
        for(int j = 0; j < i; j++)
        {
            if (arr[j] > avr)
                cnt++;
        }
        cout << "Average = " << avr << "; Numbers larger than average = "
             << cnt << endl;
    } else
        cout << "Ooops.. No data." << endl;
    return 0;
}
