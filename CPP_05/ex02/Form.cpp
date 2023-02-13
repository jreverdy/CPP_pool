#include "Form.hpp"

AForm::AForm(std::string str, const int gradeSigned, const int gradeExec) : _name(str), _signed(0), _gradeSigned(gradeSigned), _gradeExec(gradeExec)
{
    if (_gradeSigned < 1 || _gradeExec < 1)
        throw (AForm::GradeTooHighException());
    else if (_gradeSigned > 150 || _gradeExec > 150)
        throw(AForm::GradeTooLowException());
}

AForm::AForm(const AForm &rhs) : _gradeSigned(rhs._gradeSigned), _gradeExec(rhs._gradeExec)
{
    *this = rhs;
}

AForm &AForm::operator=(const AForm &rhs)
{
    _signed = rhs._signed;
    return (*this);
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
    return (_name);
}

int     AForm::getGradeSigned()const
{
    return (_gradeSigned);
}
int     AForm::getGradeExec()const
{
    return (_gradeExec);
}
bool    AForm::getSigned()const
{
    return(_signed);
}

void        AForm::beSigned(Bureaucrat &bureaucrat)
{
    size_t i =  _gradeSigned;

    if (bureaucrat.getGrade() <= i)
        _signed = 1;
    else
        throw (AForm::GradeTooLowException());
}

std::ostream	&operator<<(std::ostream& os, const AForm& obj)
{
    os << "Form :" << obj.getName();
    os << "Sign or Not signed..: " << obj.getSigned();
    os << "Grade to exec" << obj.getGradeExec();
    os << "Grade to sign" <<  obj.getGradeSigned();
    return (os);
}
