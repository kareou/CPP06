#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include "ScalarConverte.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 0;
	}
	std::string str = argv[1];
	ScalarConverte::convert(str);
	return 0;
}
