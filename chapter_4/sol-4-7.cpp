//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.7 -------------------------
/*
    William Wingate runs a pizza-analysis service. For each pizza, he needs to
    record the following information:
    - The name of the pizza company, which can consist of more than one word
    - The diameter of the pizza
    - The weight of the pizza
    Devise a structure that can hold this information and write a program that
    uses a structure variable of that type.The program should ask the user to
    enter each of the preceding items of information, and then the program
    should display that information. Use cin (or its methods) and cout.
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
    pizza willi;
    cout << "Enter name of the pizza company: ";
    cin.getline(willi.company, 20);
    cout << "Enter diameter: ";
    cin >> willi.diameter;
    cout << "Enter weight: ";
    cin >> willi.weight;
    cout << "\nPizza\n Company: " << willi.company << "\n Diameter: "
         << willi.diameter << "\n Weight: " << willi.weight << endl;
    return 0;
}
