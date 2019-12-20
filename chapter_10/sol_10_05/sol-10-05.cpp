#include "stack_10.h"
#include <cctype>
#include <iostream>

int main(void)
{
    Stack st;
    char ch;
    double total = 0;
    customer po;
    std::cout << "Pleace enter A to add customer, \n"
         << "P to process a PO, or Q to quit.\n";
    while(std::cin >> ch && toupper(ch) != 'Q')
    {
        while(std::cin.get() != '\n')
            continue;
        if(!isalpha(ch))
        {
            std::cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': std::cout << "Enter full name: ";
                      std::cin.get(po.fullname, 35);
                      while(std::cin.get() != '\n')
                          continue;
                      std::cout << "Enter payment amount: ";
                      std::cin >> po.payment;
                      if(st.isfull())
                          std::cout << "stack already full\n";
                      else
                          st.push(po);
                      break;
            case 'P':
            case 'p': if(st.isempty())
                          std::cout << "stack already empty\n";
                      else {
                          st.pop(po);
                          std::cout << "PO #" << (total += po.payment) << " popped\n";
                      }
                      break;
        }
        std::cout << "Please enter A to add customer,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    std::cout << "Bye\n";
    return 0;
}
