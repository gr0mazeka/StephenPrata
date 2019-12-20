// stack.cpp --for sol-10-05.cpp

#include "stack_10.h"

bool Stack::isempty() const
{
    return top == 0;
}
bool Stack::isfull() const
{
    return top == MAX;
}
bool Stack::push(const Item & item)
{
    if(top < MAX)
    {
        items[top++] = item;
        return true;
    } else
        return false;
}
bool Stack::pop(Item & item)
{
    if(top > 0)
    {
        item = items[--top];
        return true;
    } else
        return false;
}
