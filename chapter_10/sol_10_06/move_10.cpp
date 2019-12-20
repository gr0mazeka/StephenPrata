//  move_10.cpp --for sol-10-06.cpp

#include "move_10.h"
#include <iostream>

Move::Move(double a, double b)
{
    x = a;
    y = b;
}
void Move::showmove() const
{
    std::cout << "x = " << x << "; y = " << y << ";\n";
}
Move Move::add(const Move & m) const
{
    return Move(x + m.x, y + m.y);
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
