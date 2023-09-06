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

	// std::srand(time(NULL));
	// std::vector<int> vec;

	// Span sp2 = Span(10000); 
    // try
	// {
	// 	sp2.addNumber(2000);
	// 	sp2.addNumber(vec.begin() + vec.size() / 2, vec.end());

    //     std::cout << "add with iterators : shortest span : " << sp2.shortestSpan() << std::endl;
	// 	std::cout << "add with iterators: longest span  : " << sp2.longestSpan() << std::endl;
    // }
    // catch (const std::exception &e){
	// 	std::cerr << RED << e.what() << RESET << std::endl;
    // }
	return 0;
}