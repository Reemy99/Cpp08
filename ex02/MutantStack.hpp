#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m" 
#define MAGENTA "\033[35m"   
#define CYAN    "\033[36m"  
#define WHITE   "\033[37m"
#define RESET	"\033[0m"

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack<T> &copy) : std::stack<T>(copy) {}
        MutantStack<T> &operator=(const MutantStack<T> &copy)
        {
            if (this == &copy)
                return (*this);
            std::stack<T>::operator=(copy);
            return (*this);
        }
        ~MutantStack() {}

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return (std::stack<T>::c.begin()); }
        iterator end() { return (std::stack<T>::c.end()); }
};

#endif