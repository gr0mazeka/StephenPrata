//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ----------------------- Programming Exercises 11.1 -------------------------

#include "vect_11.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>

int main(void)
{
    using namespace std;
    using VECTOR::Vector;
    ofstream fout;
    fout.open("vect_log.txt");
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while(cin >> target)
    {
        cout << "Enter step lenhth: ";
        if(!(cin >> dstep))
            break;
        fout << "Target Distance: " << target << ", "
             << "Step Size: " << dstep << endl;
        while(result.magval() < target)
        {
            fout << steps << ": " << result << endl;
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        fout << "After " << steps << " steps, the subject "
                "has the following location:\n" << result << endl;

        cout << "After " << steps << " steps, the subject "
                "has the following location:\n" << result << endl;
        result.polar_mode();

        fout << " or\n" << result << endl;
        fout << "Average outward distance per step = "
             << result.magval()/steps << endl;

        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
             << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    fout.close();
    cout << "Bye!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}
