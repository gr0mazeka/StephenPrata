//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.8 -------------------------
/*
    Do Programming Exercise 7 but use new to allocate a structure instead of
    declaring a structure variable.Also have the program request the pizza
    diameter before it requests the pizza company name.
*/
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
    pizza* will = new pizza;
    cout << "Enter diameter: ";
    (cin >> will->diameter).get();
    cout << "Enter name of the pizza company: ";
    cin.getline(will->company, 20);
    cout << "Enter weight: ";
    cin >> will->weight;
    cout << "\nPizza\n Company: " << will->company << "\n Diameter: "
         << will->diameter << "\n Weight: " << will->weight << endl;
    delete will;
    return 0;
}
