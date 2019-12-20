//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 6.6 -------------------------

#include <iostream>
#include <string>
struct donors{
    std::string name;
    double donat;
};
int main()
{
    using namespace std;
    cout << "Enter members: ";
    int mem, cnt = 0;
    (cin >> mem).get();
    donors *patron = new donors[mem];
    for(int i = 0; i < mem; i++)
    {
        cout << i+1 << ". Name: ";
        getline(cin, patron[i].name);
        cout << "Contribution: ";
        (cin >> patron[i].donat).get();
    }
    cout << "\nGrand Patron:\n";
    for(int i = 0; i < mem; i++)
    {
        if(patron[i].donat >= 10000)
        {
            cout << patron[i].name << "\t" << patron[i].donat << endl;
            cnt++;
        }
    }
    if(cnt == 0)
        cout << " none\n";
    cout << "Patron:\n";
    if(cnt == mem)
        cout << " none\n";
    else {
        for(int i = 0; i < mem; i++)
        {
            if(patron[i].donat < 10000)
                cout << patron[i].name << "\t" << patron[i].donat << endl;
        }
    }
    delete [] patron;
    return 0;
}
