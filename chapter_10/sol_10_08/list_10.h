// list_10.h --for sol-10-08.cpp

#ifndef LIST_H_
#define LIST_H_

typedef double Item;
class List
{
    private:
        enum{MAX = 10};
        Item items[MAX]{};
        int top;
    public:
        List();
        bool isempty() const;
        bool isfull() const;
        void add(const Item &);
        void show() const;
        void visit(void (*pf)(Item &));
};

#endif  // LIST_H_
