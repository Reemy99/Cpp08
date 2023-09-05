#ifndef SPANN_HPP
#define SPANN_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m" 
#define MAGENTA "\033[35m"   
#define CYAN    "\033[36m"  
#define WHITE   "\033[37m"
#define RESET	"\033[0m"

#include <iostream>
#include <vector>

class Span
{
private:
		unsigned int		_max;
		std::vector<int>	_vec;
public:
    Span();
    Span(unsigned int n);
    Span(Span const &copy);
    ~Span();

    int		shortestSpan();
    int		longestSpan();
    void addNumber(int number);
    void addMoreNum(int size);

    class	ContainerEmptyException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class	ContainerMaxException : public std::exception
    {
        public:
            const char *what() const throw();
    };
};

#endif