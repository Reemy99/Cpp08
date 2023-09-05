#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m" 
#define MAGENTA "\033[35m"   
#define CYAN    "\033[36m"  
#define WHITE   "\033[37m"
#define RESET	"\033[0m"

#include <map>
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>


template <typename T>
typename  T::iterator easyFind(T& container, int target)
{
    typename T::iterator it = std::find(container.begin(), container.end(), target);
    if (it != container.end()) {
        return it;
    }
    else {
        throw std::runtime_error("Element not found in container"); // Throw an exception if not found
    }

}

#endif