#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"
class AForm;

class Bureaucrat
{
private:

    Bureaucrat &operator=(const Bureaucrat &rhs);
    std::string const   _name;
    int                 _grade;

public:

class   GradeTooHighException : public std::exception
{
    public:
        virtual const char* what()const throw()
        {
            return ("Your grade is too high to execute this form !");
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

class   ExecutionException : public std::exception
{
    public:
        virtual const char* what()const throw()
        {
            return ("You cannot execute this form!");
        }
};

    Bureaucrat(const std::string str, int rank);
    Bureaucrat(const Bureaucrat &rhs);
    ~Bureaucrat();

    std::string getName()const;
    int         getGrade()const;

    void        executeForm(AForm const &form);
    void        signForm(AForm &form);
    void        upGrade();
    void        downGrade();
};

std::ostream	&operator<<(std::ostream& os, const Bureaucrat& obj);

#endif