#include "MutantStack.hpp"
#include <list>

int main () {

    MutantStack<int> tmpStack;
    tmpStack.push(10);
    tmpStack.push(20);
    tmpStack.push(30);

    std::cout << YELLOW << "size before pop is  ---> " << RESET << tmpStack.size() << std::endl;
    std::cout << "top is ---> " << tmpStack.top() << std::endl;
    tmpStack.pop();

    std::cout << YELLOW <<"size after pop is ---> " << RESET << tmpStack.size()  << std::endl;
    std::cout << "top is ---> " << tmpStack.top() << std::endl;
    tmpStack.push(40);
    std::cout << "______________________________" << std::endl;

    MutantStack<int>::iterator it = tmpStack.begin();
    MutantStack<int>::iterator itEnd = tmpStack.end();
    ++it;
    --it;
    std::cout << BLUE <<  "stack value is ---> " << RESET;
    while (it != itEnd) {
        std::cout << *it << " ";
        it++;
    }

    // std::cout << "\n______________________________" << std::endl;
    // while (!tmpStack.empty()) {
    //     std::cout << tmpStack.top() <<" " << std::endl; 
    //     tmpStack.pop();
    // }

    std::cout << "\n----------list--------------" << std::endl;
    
    std::list<int> list;
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
    std::cout << "top: " << list.front() << std::endl;
    list.pop_front();
    std::cout << "size: " << list.size() << std::endl;
    list.push_front(40);
 
    std::list<int>::iterator itb = list.begin();
    std::list<int>::iterator ite = list.end();
    ++itb;
    --itb;
    std::cout << "stack: ";
    while (itb != ite) {
        std::cout << *itb << " ";
        ++itb;
    }
    std::cout << std::endl;
    return 0;
}