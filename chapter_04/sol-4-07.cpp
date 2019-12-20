//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.7 -------------------------

#include <iostream>
struct pizza
{
    char company[20];
    float diameter;
    float weight;
};
int main()
{
    using namespace std;
    pizza will;
    cout << "Enter name of the pizza company: ";
    cin.getline(will.company, 20);
    cout << "Enter diameter: ";
    cin >> will.diameter;
    cout << "Enter weight: ";
    cin >> will.weight;
    cout << "\nPizza\n Company: " << will.company << "\n Diameter: "
         << will.diameter << "\n Weight: " << will.weight << endl;
    return 0;
}
