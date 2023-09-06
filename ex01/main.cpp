#include "span.hpp"

int main()
{
	Span sp1 = Span(5); // the size of the vector
	try
	{
		sp1.addNumber(1);
		sp1.addNumber(2);
		sp1.addNumber(9);

		std::cout << BLUE << "addNumber : shortest span : " << sp1.shortestSpan() << RESET << std::endl;
		std::cout << BLUE << "addNumber : longest span  : " << sp1.longestSpan() << RESET << std::endl;

    std::cout << "________________________" << std::endl;


		std::srand(time(NULL));
		std::vector<int> vec;

		for (size_t i = 0; i < 10000; i++)
		{
			int n = std::rand() % 10000;
			vec.push_back(n);
		}
		Span sp2 = Span(10000); 

		sp2.addNumber(vec.begin() + vec.size() / 2, vec.end());

		std::cout << BLUE <<"addNumber with iterators : shortest span "  << sp2.shortestSpan() << RESET << std::endl;

		for (size_t i = 0; i < sp2._vec.size(); i++)
		{
			// std::cout << sp2._vec[i] << " ";
		}
		std::cout << BLUE <<"addNumber with iterators : longest span " << sp2.longestSpan() << RESET << std::endl;
    }
    catch (const std::exception &e){
		std::cerr << RED << e.what() << RESET << std::endl;
    }
	return 0;
}