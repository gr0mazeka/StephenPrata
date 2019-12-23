// list_10.cpp --for sol-10-08.cpp

#include "list_10.h"
#include <iostream>

List::List()
{
    top = 0;
}
bool List::isempty() const
{
    return top == 0;
}
bool List::isfull() const
{
    return top == MAX;
}
void List::add(const Item & item)
{
    if(top < MAX)
        items[top++] = item;
}
void List::visit(void (*pf)(Item &))
{
    for(int i = 0; i < top; i++)
        pf(items[i]);
}
void List::show() const
{
    if(isempty())
        std::cout << "List is empty.\n";
    else
        for(int i = 0; i < top; i++)
            std::cout << "Item #" << i + 1 << ": " << items[i] << "\n";
}
