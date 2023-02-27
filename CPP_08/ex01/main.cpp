#include "Span.hpp"

void    printSet(std::set<unsigned int> const &input)
{
    std::copy(input.begin(), input.end(), std::ostream_iterator<unsigned int>(std::cout, " "));
    std::cout << std::endl << std::endl;
}

std::vector<unsigned int>   generateVector(unsigned int size, unsigned int range)
{
    std::vector<unsigned int>    v1;

    srand(time(0));
    for (size_t i = 0; i < size; i++)
    {
        int res = rand()% range +1;
        v1.push_back(res);
    }
    return (v1);
}

int main()
{

    std::cout << std::endl;
    std::cout << "############ Work with addNumber ############";
    std::cout << std::endl << std::endl;
    try
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "############ No entry, should not work ############";
    std::cout << std::endl << std::endl;
    try
    {
        Span sp = Span(2);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "############ Too many input, should not work ############";
    std::cout << std::endl << std::endl;
    try
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(1);

        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "############ Work with insert ############";
    std::cout << std::endl << std::endl;
    try
    {
        Span sp = Span(50);

        std::vector<unsigned int> v1 = generateVector(sp.getmaxSize(), 1000);
        sp.insert(v1.begin(), v1.end());
        printSet(sp.getTab());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "############ Too many input, should not work ############";
    std::cout << std::endl << std::endl;
    try
    {
        Span sp = Span(11);

        std::vector<unsigned int> v1 = generateVector(sp.getmaxSize(), 100);
        sp.insert(v1.begin(), v1.end());
        sp.addNumber(1);
        printSet(sp.getTab());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
