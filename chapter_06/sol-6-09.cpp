//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 6.9 -------------------------

#include <iostream>
#include <fstream>
#include <string>
struct donors{
    std::string name;
    double donat;
};
int main()
{
    using namespace std;
    ifstream inFile;
    inFile.open("test_6_9.txt");
    if (!inFile.is_open ())
    {
        cout << "Could not open the file: \"test_6_9.txt\""  << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    int mem, cnt = 0;
    (inFile >> mem).get();
    donors *patron = new donors[mem];
    for(int i = 0; i < mem; i++)
    {
        getline(inFile, patron[i].name);
        (inFile >> patron[i].donat).get();
    }
    cout << "Grand Patron:\n";
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
    inFile.close();
    delete [] patron;
    return 0;
}
