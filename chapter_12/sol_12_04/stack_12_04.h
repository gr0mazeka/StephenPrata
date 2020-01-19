// stack_12_04.h --for sol-12-04.cpp

#ifndef STACK_H_
#define STACK_H_
typedef unsigned long Item;

class Stack
{
    private:
        enum {MAX = 10};
        Item *pitems;
        int size;
        int top;
    public:
        Stack(int n = 10);
        Stack(const Stack & st);
        ~Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item & item);
        bool pop(Item & item);
        Stack & operator=(const Stack & st);
};
#endif // STACK_H_
