//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 6.3 -------------------------

#include <iostream>
int main()
{
    using namespace std;
    cout << "Please enter one of the following choices:\n"
            " c) carnivore\t p) pianist\n"
            " t) tree\t g) game\n";
    char ch;
    cin >> ch;
    while(ch !='c' && ch !='p' && ch !='t' && ch !='g')
    {
        cout << "Please enter a c, p, t, or g: ";
        cin >> ch;
    }
    switch(ch)
    {
        case 'c' : cout << "Carnivore\n"; break;
        case 'p' : cout << "Pianist\n"; break;
        case 't' : cout << "A maple is a tree.\n"; break;
        case 'g' : cout << "Game\n"; break;
    }
    return 0;
}
