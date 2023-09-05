#include "easyFind.hpp"

int main()
{
    //_________________________________Vectors__________________________________
    std::vector<int> myVector;
    myVector.push_back(0);
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(99);

    try {
        std::cout << CYAN << "- My Vector size is :" << myVector.size() << RESET << std::endl;

        std::vector<int>::iterator result = easyFind(myVector, 100);
        std::cout << GREEN << "- Element found at position: " << std::distance(myVector.begin(), result) << RESET << std::endl;
	}
    catch(std::exception &e) {
        std::cerr << RED << "- Exception : " <<  e.what() << RESET << std::endl;
    }

    std::cout << YELLOW << "__________________________________________________" << RESET << std::endl;

    //_________________________________Lists__________________________________
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    try {
        std::cout << CYAN << "- My List size is :" << lst.size() << RESET << std::endl;

        std::list<int>::iterator result = easyFind(lst, 10);
        std::cout << GREEN << "- Element found at position: " << std::distance(lst.begin(), result) << RESET << std::endl;

	}
    catch(std::exception &e) {
        std::cerr << RED << "- Exception : " <<  e.what() << RESET << std::endl;
    }

    std::cout << YELLOW << "__________________________________________________" << RESET << std::endl;
   

    return 0;
}
