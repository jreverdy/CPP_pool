#include "Intern.hpp"

Intern::Intern()
{
    _nameForm[0] = "Shrubbery creation";
    _nameForm[1] = "Robotomy request";
    _nameForm[2] = "Presidential pardon";
}

Intern::Intern(const Intern &rhs)
{
    *this = rhs;
}

Intern &Intern::operator=(const Intern &rhs)
{
    _nameForm[0] = rhs._nameForm[0];
    _nameForm[1] = rhs._nameForm[1];
    _nameForm[2] = rhs._nameForm[2];
    return (*this);
}

Intern::~Intern()
{

}

AForm    *Intern::makeForm(std::string FormName, std::string target)
{
    AForm *form;

    int FormType = -1;
    for (int i = 0; i < 3 ; ++i)
    {
        if (_nameForm[i] == FormName)
        {
            FormType = i;
            break;
        }
    }
    switch (FormType)
    {
        case -1:
            throw (FormNotFound());

        case 0:
            form = new ShrubberyCreationForm(target);
            std::cout << "Intern creates \"" << FormName << "\"" << std::endl;
            break;

        case 1:
            form = new RobotomyRequestForm(target);
            std::cout << "Intern creates \"" << FormName << "\"" << std::endl;
            break;

        case 2:
            form = new PresidentialPardonForm(target);
            std::cout << "Intern creates \"" << FormName << "\"" << std::endl;
            break;
    }
    return (form);
}

