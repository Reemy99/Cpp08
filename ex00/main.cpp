#include "easyFind.hpp"

// #include <iostream>
// #include <vector>
// #include <list>
// #include <algorithm> // For std::find

// // Define the easyfind function template
// template <typename T>
// typename T::iterator easyfind(T& container, int target) {
//     // Use the std::find algorithm to search for the target in the container
//     typename T::iterator it = std::find(container.begin(), container.end(), target);

//     // Check if the target was found
//     if (it != container.end()) {
//         return it; // Return the iterator pointing to the found element
//     } else {
//         throw std::runtime_error("Element not found in container"); // Throw an exception if not found
//     }
// }

int main() {
    // Test with a vector
    std::vector<int> vec;
    vec.push_back(100);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(250);
    vec.push_back(99);

    try {
        std::cout << BLUE << "- My Vector size is :" << vec.size() << RESET << std::endl;

        std::vector<int>::iterator result = easyfind(vec, 99);
        std::cout << GREEN << "- Element found at position: " << std::distance(vec.begin(), result) << RESET << std::endl;
	}
    catch(std::exception &e) {
        std::cerr << RED << "- Exception : " <<  e.what() << RESET << std::endl;
    }

    std::cout << YELLOW << "________________________________________" << RESET << std::endl;

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);
    try {
        std::list<int>::iterator result = easyfind(lst, 25);
        std::cout << "Element found at position: " << std::distance(lst.begin(), result) << std::endl;
	} catch(std::exception &e) {
        std::cerr << RED << "Exception : " <<  e.what() << RESET << std::endl;
    }

    return 0;
}
