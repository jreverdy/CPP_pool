#ifndef ROBOTOMYREQUESFORM_HPP
#define ROBOTOMYREQUESFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
private:

    std::string _target;

public:

    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &rhs);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
    ~RobotomyRequestForm();

    void    execute(Bureaucrat const &executor)const;
    void    checkGrade(Bureaucrat const &executor)const;
};

#endif