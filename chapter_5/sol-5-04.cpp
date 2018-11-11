//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.4 -------------------------

#include <iostream>
int main()
{
    double dafna, kleo;
    dafna = kleo = 100;
    for(int i = 1; dafna >= kleo; i++)
    {
        dafna += 10;
        kleo += kleo*0.05;
        std::cout << i << ". Dafna = " << dafna << " Kleo = " << kleo << "\n";
    }
    return 0;
}
