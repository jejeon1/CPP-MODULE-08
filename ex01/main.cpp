#include "Span.hpp"
#include <exception>
#include <iostream>
#include <vector>

int main()
{
	try
	{
		Span sp(5);
	
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Span full(2);

		full.addNumber(1);
		full.addNumber(2);
		full.addNumber(3);


	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Span Nen(3);

		Nen.addNumber(1);

		std::cout << Nen.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::vector<int> nums;

		nums.push_back(6);
		nums.push_back(3);
		nums.push_back(17);
		nums.push_back(9);
		nums.push_back(11);

		Span range(5);

		range.addNumbers(nums.begin(), nums.end());

		std::cout << range.shortestSpan() << std::endl;
		std::cout << range.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Span big(10000);
		std::vector<int> nums;

		for (int i = 0; i < 10000; i++)
			nums.push_back(i);
		
		big.addNumbers(nums.begin(), nums.end());

		std::cout << big.shortestSpan() << std::endl;
		std::cout << big.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}