//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 4.2 -------------------------
/*
    Rewrite Listing 4.4, using the C++ string class instead of char arrays.
*/
#include <iostream> 
#include <string>
int main() 
{ 
    using namespace std; 
    string name; 
    string dessert; 
    cout << "Enter your name:\n"; 
    getline(cin, name); 
    cout << "Enter your favorite dessert:\n"; 
    getline(cin, dessert); 
    cout << "I have some delicious " << dessert; 
    cout << " for you, " << name << " .\n"; 
    return 0; 
} 
