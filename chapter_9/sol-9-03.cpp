//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 9.3 -------------------------

#include <iostream>
#include <new>
#include <cstring>
struct chaff
{
    char dross[20];
    int slag;
};
char baffer[2*sizeof(chaff)];
int main(void)
{
    //Option 1
    chaff *ps1 = new (baffer) chaff[2];
    strcpy(ps1[0].dross, "option_1");
    strcpy(ps1[1].dross, "OPTION_1");
    ps1[0].slag = 1;
    ps1[1].slag = 2;
    //Option 2
    chaff *ps2 = new chaff[2];
    strcpy(ps2[0].dross, "option_2");
    strcpy(ps2[1].dross, "OPTION_2");
    ps2[0].slag = 100;
    ps2[1].slag = 200;
    //Resume
    for(int i = 0; i < 2; i++)
        std::cout << "dross: "   << ps1[i].dross << " slag: " << ps1[i].slag
                  << "\ndross: " << ps2[i].dross << " slag: " << ps2[i].slag
                  << std::endl;
    delete []ps2;
    return 0;
}
