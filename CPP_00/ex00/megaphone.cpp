#include <iostream>

int main (int ac, char **av)
{
   int  i;
   int j;
   std::string	str;

   i = 1;
   if (ac == i)
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
   while (av[i])
   {
       j = 0;
       while (av[i][j])
       {
		   str.push_back(std::toupper(av[i][j]));
           j++;
       }
       i++;
   }
   std::cout << str << std::endl;
   return (0);
}