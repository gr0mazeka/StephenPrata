//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.8 -------------------------

#include <iostream>
#include <cstring>
int main()
{
    char word[20];
    int count = 0;
    std::cout << "Enter words (to stop, type the word done):\n";
    std::cin >> word;
    while (strcmp(word, "done"))
    {
        std::cin >> word;
        count++;
    }
    std::cout << "You entered a total of " << count << " words." << "\n";
    return 0;
}
