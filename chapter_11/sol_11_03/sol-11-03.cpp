//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ----------------------- Programming Exercises 11.3 -------------------------

#include "vect_11_03.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main(void)
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    unsigned long total;
    unsigned long min, max;
    double target;
    double dstep;
    int trials;
    cout << "Enter target distance (q to quit): ";
    while(cin >> target)
    {
        cout << "Enter step length: ";
        if(!(cin >> dstep))
            break;
        cout << "Enter trials: ";
        if(!(cin >> trials))
            break;
        total = 0;
        for(int i = 0; i < trials; i++)
        {
            while(result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }
            total += steps;
            if(i == 0) min = max = steps;
            if(min > steps) min = steps;
            if(max < steps) max = steps;
            steps = 0;
            result.reset(0.0, 0.0);
        }
        cout << "The highest, lowest, and average number of steps for "
             << trials << " trials:\n";
        cout << " Highest: " << max << "\n Lowest : " << min
             << "\n Average: " << total/trials << endl;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}
