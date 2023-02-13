#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public AForm
{
private:

    std::string _target;

public:

    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
    ~ShrubberyCreationForm();

    void    printAsciiTrees();
};

#endif