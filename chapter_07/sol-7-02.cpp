//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 7.2 -------------------------

#include <iostream>
const int SIZE = 10;
int fill_ar(int ar[], int limit);
void avrage(int ar[], int n);
void show_ar(const int ar[], int n);
int main()
{
    int result[SIZE];
    int size = fill_ar(result, SIZE);
    show_ar(result, size);
    avrage(result, size);
    return 0;
}
int fill_ar(int ar[], int limit)
{
    int i, temp;
    std::cout << "Enter up to 10 golf scores (negative value to loop quit):\n";
    for(i = 0; i < limit; i++)
    {
        std::cout << "Value #" << (i + 1) << ": ";
        std::cin >> temp;
        if(!std::cin)
        {
            std::cin.clear();
            while(std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; input process terminated.\n";
            break;
        } else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}
void avrage(int ar[], int n)
{
    double temp = 0.0;
    for(int i = 0; i < n; i++)
        temp += ar[i];
    if(n) std::cout << "Avrage score: " << temp/n << std::endl;
}
void show_ar(const int ar[], int n)
{
    for(int i = 0; i < n; i++)
        std::cout << "Property #" << (i + 1) << ": " << ar[i] << std::endl;
}
