#ifndef INTERN_HPP
#define INTERN_HPP
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
class AForm;

class Intern
{
private:

    std::string _nameForm[3];

public:

    Intern();
    Intern(const Intern &rhs);
    Intern &operator=(const Intern &rhs);
    ~Intern();

class FormNotFound : public std::exception
{
public:
    virtual const char* what()const throw()
    {
        return ("Form not found !");
    }};

    AForm   *makeForm(std::string FormName, std::string target);
};

#endif