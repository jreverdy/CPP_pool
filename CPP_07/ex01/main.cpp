#include "iter.hpp"

int main (void)
{
    {
        std::string tab[2] = {"je m amuse beaucoup grace a la piscine CPP", "j'ai hate que ça se finisse"};
        std::cout << "Before iter: " << tab[0] << std::endl;
        std::cout << "Before iter: " << tab[1] << std::endl;
        std::cout << std::endl;
        iter<std::string>(tab, 2, &strCapitalizer);
        iter<std::string>(tab, 2, &printStr);
        std::cout << std::endl;
    }
    {
        int tab[10] = {0,1,2,3,4,5,6,7,8,9};
        for (int i = 0; i < 10; i++)
        {
            std::cout << " ";
            std::cout << tab[i];
            std::cout << " ";
        }
        std::cout << std::endl;
        iter<int>(tab, 10, incrementation);
        iter<int>(tab, 10, printInt);
        std::cout << std::endl;
        iter<int>(tab, 10, decrementation);
        iter<int>(tab, 10, printInt);

    }

}