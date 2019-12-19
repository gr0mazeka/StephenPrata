//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ----------------------- Programming Exercises 10.3 -------------------------

#include "golf_10.h"

const int SIZE = 5;
int main(void)
{
    Golf ann {"Ann Birdfree", 24};
    ann.showgolf();
    ann.sethandicap(30);
    ann.showgolf();
    Golf arr[SIZE];
    int player = 0;
    while(player < SIZE && arr[player].setgolf())
        player++;
    for(int i = 0; i < player; i++)
        arr[i].showgolf();
    return 0;
}
