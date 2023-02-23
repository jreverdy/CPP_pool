#include "Array.hpp"

int main(void)
{
    try
    {
        Array<int> emptyArray;
        Array<int> tab(5);

        std::cout << "Number of elements in the first array : " << tab.size() << std::endl;
        std::cout << "Number of elements in the second array : " << emptyArray.size() << std::endl;

        tab[0] = 0;
        tab[1] = 15;
        tab[2] = 24;
        tab[3] = 42;
        tab[4] = 1;
        for (size_t i = 0; i < tab.size(); i++)
        {
            std::cout << tab[i];
            if (i != tab.size() - 1)
                std::cout << " | ";
        }
        std::cout << std::endl;

        //tab[10] = 1;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}