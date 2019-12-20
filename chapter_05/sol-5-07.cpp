//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.7 -------------------------

#include <iostream>
#include <string>
struct car
{
    std::string make;
    int year;
};
int main()
{
    using namespace std;
    cout << "How many cars do you wish to catalog? ";
    int qty;
    (cin >> qty).get();
    car *collection = new car[qty];
    for(int i = 0; i < qty; i++)
    {
        cout << "Car #" << i+1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, collection[i].make);
        cout << "Please enter the year made: ";
        (cin >> collection[i].year).get();
    }
    cout << "Here is your collection:\n";
    for(int i = 0; i < qty; i++)
        cout << collection[i].year << " " << collection[i].make << endl;
    delete [] collection;
    return 0;
}
