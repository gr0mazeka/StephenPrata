//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ----------------------- Programming Exercises 11.4 -------------------------

#include "mytime_11_04.h"
#include <iostream>

int main(void)
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    Time temp2;
    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    temp2 = aida - tosca;
    cout << "Aida - Tosca: " << temp2 << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
    return 0;
}
