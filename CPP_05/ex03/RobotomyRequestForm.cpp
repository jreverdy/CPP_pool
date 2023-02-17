#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45), _target("Unknown")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : AForm("Robotomy", 72, 45)
{
    *this = rhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    _target = rhs._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::checkGrade(const Bureaucrat &executor)const
{
    if (executor.getGrade() > getGradeExec())
        throw (GradeTooHighException());
    if (getGradeExec() < 1 || getGradeSigned() < 1)
        throw (GradeTooLowException());
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
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

    std::cout << "*drill noises*" << std::endl;
    srand(time(0));
    int test = rand();
    if (test % 2 == 0)
        std::cout << _target << " has been robotomized" << std::endl;
    else
        std::cout << "Operation has failed..." << std::endl;
}