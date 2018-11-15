//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 6.7 -------------------------

#include <iostream>
#include <string>
#include <cctype>
int main()
{
    using namespace std;
    int vowels = 0, consonants = 0, others = 0;
    cout << "Enter words (q to quit):\n";
    string word;
    while (cin >> word && word != "q")
    {
        if (isalpha(word[0]))
        {
            switch (word[0])
            {
                case 'A': case 'a':	case 'E': case 'e':
                case 'I': case 'i':	case 'U': case 'u':
                case 'Y': case 'y':	case 'O': case 'o':
                    vowels++; break;
                default: consonants++;				
            }
        }
        else
            others++;
    }
    cout << vowels << " words beginning with vowels.\n"
         << consonants << " words beginning with consonants.\n"
         << others << " others.\n";
    return 0;
}
