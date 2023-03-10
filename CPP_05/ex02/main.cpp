#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "--------------###### ShrubberyCreationForm ######--------------" << std::endl;
    std::cout << std::endl;

    try
    {
        std::cout << std::endl << "~~~~~~~ Can sign and execute ~~~~~~" << std::endl << std::endl;
        Bureaucrat b("Paul", 137);
        ShrubberyCreationForm a("jardin");
        b.signForm(a);
        b.executeForm(a);

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << "~~~~~~~ Can sign but not execute ~~~~~~" << std::endl << std::endl;
        Bureaucrat b("Paul", 145);
        ShrubberyCreationForm a("Terrasse");
        b.signForm(a);
        b.executeForm(a);

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "--------------###### RobotomyRequestForm ######--------------" << std::endl;

    try
    {
        std::cout << std::endl << "~~~~~~~ Can sign and execute ~~~~~~" << std::endl << std::endl;
        Bureaucrat b("José", 45);
        RobotomyRequestForm a("Billy");
        b.signForm(a);
        b.executeForm(a);

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << "~~~~~~~ Can sign but not execute ~~~~~~" << std::endl << std::endl;
        Bureaucrat b("José", 65);
        RobotomyRequestForm a("Billy");
        b.signForm(a);
        b.executeForm(a);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "--------------###### PresidentialPardonForm ######--------------" << std::endl;
    std::cout << std::endl;

    try
    {
        std::cout << std::endl << "~~~~~~~ Can sign and execute ~~~~~~" << std::endl << std::endl;
        Bureaucrat b("Max", 1);
        PresidentialPardonForm a("Théodore");
        b.signForm(a);
        b.executeForm(a);

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << std::endl << "~~~~~~~ Can sign but not execute ~~~~~~" << std::endl << std::endl;
        Bureaucrat b("José", 6);
        PresidentialPardonForm a("Théodore");
        b.signForm(a);
        b.executeForm(a);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

}
