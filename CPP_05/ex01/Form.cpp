#include "Form.hpp"

Form::Form(std::string str, const int gradeSigned, const int gradeExec) : _name(str), _signed(0), _gradeSigned(gradeSigned), _gradeExec(gradeExec)
{
    if (_gradeSigned < 1 || _gradeExec < 1)
        throw (Form::GradeTooHighException());
    else if (_gradeSigned > 150 || _gradeExec > 150)
        throw(Form::GradeTooLowException());
    std::cout << "Default constructor called from Form" << std::endl;
}

Form::Form(const Form &rhs) : _gradeSigned(rhs._gradeSigned), _gradeExec(rhs._gradeExec)
{
    std::cout << "Copy construcor called from Form" << std::endl;
    *this = rhs;
}

Form &Form::operator=(const Form &rhs)
{
    _signed = rhs._signed;
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called from Form" << std::endl;
}

std::string Form::getName() const
{
    return (_name);
}

int     Form::getGradeSigned()const
{
    return (_gradeSigned);
}
int     Form::getGradeExec()const
{
    return (_gradeExec);
}
bool    Form::getSigned()const
{
    return(_signed);
}

void        Form::beSigned(Bureaucrat &bureaucrat)
{
    size_t i =  _gradeSigned;

    if (bureaucrat.getGrade() <= i)
        _signed = 1;
    else
        throw (Form::GradeTooLowException());
}

std::ostream	&operator<<(std::ostream& os, const Form& obj)
{
    os << "Form :" << obj.getName();
    os << "Sign or Not signed..: " << obj.getSigned();
    os << "Grade to exec" << obj.getGradeExec();
    os << "Grade to sign" <<  obj.getGradeSigned();
    return (os);
}
