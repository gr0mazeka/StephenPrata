//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 8.4 -------------------------

#include <iostream>
#include <cstring>
struct stringy{
    char *str;
    int ct;
};
using namespace std;
void set(stringy &, const char*);
void show(const char*, int n = 1);
void show(const stringy &, int n = 1);
int main(void)
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    delete[]beany.str;
    return 0;
}
void set(stringy &ps, const char *ch)
{
    int len = strlen(ch);
    char *str = new char[len+1];
    strcpy(str, ch);
    ps.str = str;
    ps.ct = len;
}
void show(const stringy &ps, int n)
{
    for(int i = 0; i < n; i++)
        cout << ps.str << endl;
}
void show(const char *pc, int n)
{
    for(int i = 0; i < n; i++)
        cout << pc << endl;
}
