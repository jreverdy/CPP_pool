#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
private:

    const std::string   _name;
    bool                _signed;
    const int           _gradeSigned;
    const int           _gradeExec;

public:

    class   GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what()const throw()
        {
            return ("You don't have the right for this form sorry !");
        }

    };
    class   GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what()const throw()
        {
            return ("Required grade is too Low, fix this !");
        }
    };
    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char* what()const throw()
        {
            return ("Form not signed !");
        }
    };

    AForm(const std::string str, const int gradeSigned, const int gradeExec);
    AForm(const AForm &rhs);
    AForm &operator=(const AForm &rhs);
    virtual ~AForm();

    std::string getName()const;
    int         getGradeSigned()const;
    int         getGradeExec()const;
    bool        getSigned()const;

    virtual void    execute(Bureaucrat const &executor)const = 0;
    void            beSigned(Bureaucrat &bureaucrat);
};

std::ostream	&operator<<(std::ostream& os, const AForm& obj);

#endif