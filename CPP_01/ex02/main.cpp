#include "iostream"

int main()
{

	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address of the string: " << &str << std::endl;
	std::cout << "address stocked in StringPTR: " << stringPTR << std::endl;
	std::cout << "address stocked in StringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of the string: " << str << std::endl;
	std::cout << "Value pointed by StringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by StringREF: " << stringREF << std::endl;
}
