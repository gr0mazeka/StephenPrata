//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 5.9 -------------------------

#include <iostream>
#include <string>
int main()
{
    std::string word;
    int count = 0;
    std::cout << "Enter words (to stop, type the word done):\n";
    std::cin >> word;
    while(word != "done")
    {
        std::cin >> word;
        count++;
    }
    std::cout << "You entered a total of " << count << " words." << "\n";
    return 0;
}
