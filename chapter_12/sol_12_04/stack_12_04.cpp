// stack_12_04.cpp --for sol-12-04.cpp

#include "stack_12_04.h"

Stack::Stack(int n)//: size(n)
{
    if(n < 0 || n > MAX)
        n = 10;
    pitems = new Item[n];
    size = n;
    top = 0;
}
Stack::Stack(const Stack & st)//: size(n)
{
    size = st.size;
    pitems = new Item[size];
    for(int i = 0; i < size; i++)
        pitems[i] = st.pitems[i];
    top = st.top;
}
Stack::~Stack()
{
    delete [] pitems;
}
bool Stack::isempty() const
{
    return top == 0;
}
bool Stack::isfull() const
{
    return top == size;
}
bool Stack::push(const Item & item)
{
    if(top < size)
    {
        pitems[top++] = item;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item & item)
{
    if(top > 0)
    {
        item = pitems[--top];
        return true;
    }
    else
        return false;
}
Stack & Stack::operator=(const Stack & st)
{
    if(this == &st)
        return *this;
    delete [] pitems;
    size = st.size;
    top = st.top;
    pitems = new Item[size];
    for(int i = 0; i < size; i++)
        pitems[i] = st.pitems[i];
    return *this;
}
