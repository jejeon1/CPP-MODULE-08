#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
private:
	unsigned int _maxSize;
	std::vector<int> _numbers;
public:
	Span();
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	template <typename It>
	void addNumbers(It begin, It end)
	{
		while (begin != end)
		{
			addNumber(*begin);
			++begin;
		}
	}

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();
};

#endif