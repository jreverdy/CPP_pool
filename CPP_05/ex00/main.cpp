#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat inst("Bob", 150);
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat billy("billy", 150);

        billy.upGrade();
        std::cout << billy.getGrade() << std::endl;
        billy.downGrade();
        std::cout << billy.getGrade() << std::endl;
        //billy.downGrade();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat billy("bobby", 2);

        billy.upGrade();
        std::cout << billy.getGrade() << std::endl;
        //billy.upGrade();
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
}
