#include "easyfind.hpp"

void    printVector(std::vector<int> const &input)
{
    std::copy(input.begin(), input.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl << std::endl;
}

int main(void)
{
    std::vector<int>    v1;

    srand(time(0));
    for (size_t i = 0; i < 100; i++)
    {
        int res = rand()% 100 +1;
        v1.push_back(res);
    }
    printVector(v1);
    int needle = rand()% 100 +1;
    std::cout << "Number to find: " << needle << std::endl;
    try
    {
        easyfind<std::vector<int> >(v1, needle);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}