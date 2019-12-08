//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 7.9 -------------------------

#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);
int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}
int getinfo(student pa[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "Student #" << i+1 << "\n Full name: ";
        if(!(cin.get(pa[i].fullname, SLEN))) return i;
        while(cin.get() != '\n') continue;
        cout << " Hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << " opplevel: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}
void display1(student st)
{
    cout << "\n Full name: " << st.fullname
         << "\n Hobby: " << st.hobby
         << "\n opplevel: " << st.ooplevel << endl;
}
void display2(const student *ps)
{
    cout << "\n Full name: " << ps->fullname
         << "\n Hobby: " << ps->hobby
         << "\n opplevel: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "\n Full name: " << pa[i].fullname
             << "\n Hobby: " << pa[i].hobby
             << "\n opplevel: " << pa[i].ooplevel << endl;
    }
}
