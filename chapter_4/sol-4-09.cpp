//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.9 -------------------------

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
    cout << "Snack 1\n Brand name: " << snack[0].brand
         << "\n Weight: " << snack[0].weight
         << "\n Calories: " << snack[0].cal << endl;
    cout << "Snack 2\n Brand name: " << snack[1].brand
         << "\n Weight: " << snack[1].weight
         << "\n Calories: " << snack[1].cal << endl;
    cout << "Snack 3\n Brand name: " << snack[2].brand
         << "\n Weight: " << snack[2].weight
         << "\n Calories: " << snack[2].cal << endl;
    delete [] snack;
    return 0;
}
