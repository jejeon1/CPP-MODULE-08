#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span() : _maxSize(0)
{

}

Span::Span(unsigned int N) : _maxSize(N)
{

}

Span::Span(const Span& other) : _maxSize(other._maxSize), _numbers(other._numbers)
{

}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_maxSize = other._maxSize;
		this->_numbers = other._numbers;
	}
	return *this;
}

Span::~Span()
{

}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw std::runtime_error("Span is full");
	_numbers.push_back(number);
}

int Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");
	std::vector<int> copy = _numbers;
	std::sort(copy.begin(), copy.end());
	int shortest = copy[1] - copy[0];
	for (unsigned int i = 2; i < copy.size(); i++)
	{
		int diff = copy[i] - copy[i - 1];
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

int Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");
	std::vector<int>::iterator maxIt = std::max_element(_numbers.begin(), _numbers.end());
	std::vector<int>::iterator minIt = std::min_element(_numbers.begin(), _numbers.end());
	int res = *maxIt - *minIt;
	return res;
}