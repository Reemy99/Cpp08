#include "span.hpp"

Span::Span()
{}
Span::Span(unsigned int n) : _max(n)
{
    std::cout << "Vector size is : " << n << std::endl;
    std::cout << "________________________" << std::endl;
}
Span::Span(Span const &copy)
{
	*this = copy;
}
Span::~Span()
{}
void Span::addNumber(int num)
{
    if (_vec.size() == this->_max)
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
	for (unsigned int i = 1; i < this->_vec.size() - 1; i++) // why - 1
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
void	Span::addMoreNum(int amount)
{
	for (int i = 0; i < amount; i++){
		this->_vec.insert(this->_vec.begin(), rand() % 100);
	}
}
const char	*Span::ContainerMaxException::what() const throw() {
	return("Container(Vector) Is Full");
}

const char	*Span::ContainerEmptyException::what() const throw() {
	return("Container(Vector) Is Empty");
}