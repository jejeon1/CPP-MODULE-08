#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	std::list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	std::vector<int>::iterator itv;
	std::list<int>::iterator itl;

	itv = easyfind(v, 20);
	if (itv == v.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << *itv << std::endl;
	itv = easyfind(v, 40);
	if (itv == v.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << *itv << std::endl;

	itl = easyfind(l, 20);
	if (itl == l.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << *itl << std::endl;
	itl = easyfind(l, 40);
	if (itl == l.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << *itl << std::endl;
}