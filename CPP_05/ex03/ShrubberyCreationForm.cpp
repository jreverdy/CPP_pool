#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery", 145, 137), _target("Unknown")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : AForm("Shrubbery Creation", 145, 137)
{
    *this = rhs;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    _target = rhs._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void    ShrubberyCreationForm::checkGrade(const Bureaucrat &executor)const
{
    if (executor.getGrade() > getGradeExec())
        throw (GradeTooHighException());
    if (getGradeExec() < 1 || getGradeSigned() < 1)
        throw (GradeTooLowException());
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor)const
{
    (void)executor;
    try
    {
        if (getSigned() == 0)
            throw (FormNotSignedException());
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return ;
    }

    std::string name = _target + "_shrubbery";
    std::ofstream ofs(name.c_str());
    if (!ofs.is_open())
    {
        std::cerr << "Outfile is not valid" << std::endl;
        exit(EXIT_FAILURE);
    }

    ofs << "      -----    -----    -----      " << std::endl;
    ofs << "  v  -@@@@@-  -@@@@@-  -@@@@@-     " << std::endl;
    ofs << "     -@@@@@-  -@@@@@-  -@@@@@-     " << std::endl;
    ofs << "      -----    -----    -----      " << std::endl;
    ofs << "        |        |        |     v  " << std::endl;
    ofs << "        |        |        |        " << std::endl;
    ofs << "-----------------------------------"<< std::endl;

    std::cout << name << " file has been created" << std::endl;
}