//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 7.7 -------------------------

#include <iostream>
const int Max = 5;
double *fill_array(double*, const double*);
void show_array(const double*, const double*);
void revalue(double, double*, const double*);
int main()
{
    using namespace std;
    double properties[Max];
    double *pt_end = fill_array(properties, properties+Max);
    show_array(properties, pt_end);
    if ((pt_end - properties) > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, pt_end);
        show_array(properties, pt_end);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}
double *fill_array(double *begin, const double *end)
{
    using namespace std;
    double temp;
    double *pt;
    for (pt = begin; pt != end; pt++)
    {
        cout << "Enter value #" << (pt - begin)+1 << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *pt = temp;
    }
    return pt;
}
void show_array(const double *begin, const double *end)
{
    using namespace std;
    const double *pt;
    for (pt = begin; pt != end; pt++)
    {
        cout << "Property #" << (pt - begin)+1 << ": $";
        cout << *pt << endl;
    }
}
void revalue(double r, double *begin, const double *end)
{
    double *pt;
    for (pt = begin; pt != end; pt++)
        *pt *= r;
}
