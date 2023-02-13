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
            return ("Required grade is too High, fix this !");
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
    AForm(const std::string str, const int gradeSigned, const int gradeExec);
    AForm(const AForm &rhs);
    AForm &operator=(const AForm &rhs);
    virtual ~AForm();

    std::string getName()const;
    int         getGradeSigned()const;
    int         getGradeExec()const;
    bool        getSigned()const;

    void        beSigned(Bureaucrat &bureaucrat) = 0;
};

std::ostream	&operator<<(std::ostream& os, const AForm& obj);

#endif