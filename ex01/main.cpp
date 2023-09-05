#include "span.hpp"

int main()
{
	Span sp = Span(5); // the size of the vector
	try
	{
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(9);

		std::cout << "addNumber : shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "addNumber : longest span  : " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
    std::cout << "________________________" << std::endl;
    try{
        sp.addMoreNum(1000);

        std::cout << "addMoreNum : shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "addMoreNum : longest span  : " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e){
		std::cerr << RED << e.what() << RESET << std::endl;
    }
	return 0;
}