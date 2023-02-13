#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string str, int rank) : _name(str)
{
    if (rank > 150)
        throw (Bureaucrat::GradeTooLowException());
   else if (rank < 1)
        throw (Bureaucrat::GradeTooHighException());
    else
        _grade = rank;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
    *this = rhs;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    _grade = rhs._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

size_t Bureaucrat::getGrade() const
{
    return (this->_grade);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

void Bureaucrat::upGrade()
{
    if (_grade - 1 < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        _grade -= 1;
    std::cout << "Congratulations, you got a promotion !" << std::endl;
}

void Bureaucrat::downGrade()
{
    if (_grade + 1 > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
        _grade += 1;
    std::cout << "Sadly you got demoted !" << std::endl;
}

void Bureaucrat::signForm(AForm &form)
{
    if (form.getSigned() == 0)
    {
        form.beSigned(*this);
        std::cout << "Bureaucrat " << _name << " signed form " << form.getName() << std::endl;
    }
    else
        std::cout << "Form " << form.getName() << " is already signed by " << _name << std::endl;
}

std::ostream	&operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getGrade();
    os << obj.getName();
    return (os);
}
