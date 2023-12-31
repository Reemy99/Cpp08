#include "span.hpp"

Span::Span()
{}
Span::Span(unsigned int n) : _N(n)
{
	_vec.reserve(_N);
    std::cout << YELLOW << "Vector size is : " << n << RESET << std::endl;
    std::cout << "=====================================" << std::endl;
}
Span::Span(Span const &copy)
{
	*this = copy;
}
Span::~Span()
{}
void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_vec.size() + std::distance(begin, end) > _N)
        throw ContainerMaxException();
	_vec.insert(_vec.end(), begin, end);
}
	
void Span::addNumber(int num)
{
    if (_vec.size() == this->_N)
        throw ContainerMaxException();
    if (num < 0)
        throw std::runtime_error("Number is NEGATIVE");
    _vec.push_back(num);    
}

int Span::shortestSpan()
{
    if (_vec.size() <= 1)
        throw ContainerEmptyException();
    std::sort(this->_vec.begin(), this->_vec.end());
    int min;
	min = this->_vec[1] - this->_vec[0];
	for (unsigned int i = 1; i < this->_vec.size() - 1; i++)
	{
		if (this->_vec[i + 1] - this->_vec[i] < min)
			min = this->_vec[i + 1] - this->_vec[i];
	}
	return (min);
}

int	Span::longestSpan()
{
	int longest;
	
	if (this->_vec.size() < 1)
		throw Span::ContainerEmptyException();
	std::sort(this->_vec.begin(), this->_vec.end());
	longest = this->_vec.back()- this->_vec[0];
	return(longest);
}

const char	*Span::ContainerMaxException::what() const throw() {
	return("Container(Vector) Is Full");
}

const char	*Span::ContainerEmptyException::what() const throw() {
	return("Container(Vector) Is Empty");
}