//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 8.1 -------------------------

#include <iostream>
void show(const char*, int n = 0);
int main(void)
{
    char str[20] = "Hello, World!";
    show(str);
    show(str);
    show(str, 1);
    return 0;
}
void show(const char *str, int n)
{
    static int cnt = 0;
    if(!n) std::cout << str << "\n";
    else
        for(int i = 0; i < cnt; i++)
            std::cout << str << "\n";
    cnt++;
}
