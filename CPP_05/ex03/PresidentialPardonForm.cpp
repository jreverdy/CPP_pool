#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Unknown")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : AForm("PresidentialPardonForm", 25, 5)
{
    *this = rhs;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    _target = rhs._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void    PresidentialPardonForm::checkGrade(const Bureaucrat &executor)const
{
    if (executor.getGrade() > getGradeExec())
        throw (GradeTooHighException());
    if (getGradeExec() < 1 || getGradeSigned() < 1)
        throw (GradeTooLowException());
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    try
    {
        checkGrade(executor);
        if (getSigned() == 0)
            throw (FormNotSignedException());
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return ;
    }


    std::cout << "this Presidential Pardon Form inform you that " << _target << " has been forgiven by Zaphod Beeblebrox";
    std::cout << std::endl;
}