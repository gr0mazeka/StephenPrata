//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 9.1 -------------------------

#include "golf.h"

const int SIZE = 5;
int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    handicap(ann, 30);
    showgolf(ann);
    golf arr[SIZE];
    int player = 0;
    while(player < SIZE && setgolf(arr[player]))
        player++;
    for(int i = 0; i < player; i++)
        showgolf(arr[i]);
    return 0;
}
