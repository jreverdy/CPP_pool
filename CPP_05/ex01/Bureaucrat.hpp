#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat
{
private:

    void        upGrade();
    void        downGrade();
    Bureaucrat &operator=(const Bureaucrat &rhs);
    std::string const   _name;
    size_t              _grade;

public:

class   GradeTooHighException : public std::exception
{
    public:
        virtual const char* what()const throw()
        {
            return ("Grade is too high !");
        }

};

class   GradeTooLowException : public std::exception
{
    public:
        virtual const char* what()const throw()
        {
            return ("Grade is too low !");
        }
};
    Bureaucrat(const std::string str, int rank);
    Bureaucrat(const Bureaucrat &rhs);
    ~Bureaucrat();

    std::string getName()const;
    size_t      getGrade()const;

    void        signForm(Form &form);

};

std::ostream	&operator<<(std::ostream& os, const Bureaucrat& obj);

#endif