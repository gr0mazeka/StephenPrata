//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.9 -------------------------
/*
    Do Programming Exercise 6, but instead of declaring an array of three
    CandyBar structures, use new to allocate the array dynamically.
*/
#include <iostream>
#include <cstring>
struct CandyBar
{
    char brand[20];
    float weight;
    int cal;
};
int main()
{
    using namespace std;
    CandyBar *snack = new CandyBar[3];
    strcpy(snack[0].brand, "Mocha Munch");
    snack[0].weight = 2.3;
    snack[0].cal = 350;
    strcpy(snack[1].brand, "Bambi");
    snack[1].weight = 2.5;
    snack[1].cal = 390;
    strcpy(snack[2].brand, "Godzilla");
    snack[2].weight = 3.4;
    snack[2].cal = 400;
    cout << "First content\n Brand name: " << snack[0].brand
         << "\n Weight: " << snack[0].weight
         << "\n Calores: " << snack[0].cal << endl;
    cout << "Second content\n Brand name: " << snack[1].brand
         << "\n Weight: " << snack[1].weight
         << "\n Calores: " << snack[1].cal << endl;
    cout << "Third content\n Brand name: " << snack[2].brand
         << "\n Weight: " << snack[2].weight
         << "\n Calores: " << snack[2].cal << endl;
    delete [] snack;
    return 0;
}
