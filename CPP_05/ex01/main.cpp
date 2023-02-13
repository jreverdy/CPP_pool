#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "---------should not have the right to sign---------" << std::endl << std::endl;
    {
        try
        {
            Bureaucrat  billy("billy", 55);
            Form        contrat("contrat", 50, 45);

            billy.signForm(contrat);
            billy.signForm(contrat);
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Form::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Form::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl << "---------Should have the right to sign---------" << std::endl << std::endl;
    {
        try
        {
            Bureaucrat  billy("billy", 30);
            Form        contrat("contrat", 50, 45);

            billy.signForm(contrat);
            billy.signForm(contrat);
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Form::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Form::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    /*std::cout << std::endl << "---------incorrect contrat grade---------" << std::endl << std::endl;
    {
        try
        {
            Bureaucrat  billy("billy", 55);
            Form        contrat("contrat", 151, 45);

            billy.signForm(contrat);
            billy.signForm(contrat);
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Form::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Form::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }*/
    std::cout << std::endl << "---------incorrect bureaucrat grade---------" << std::endl << std::endl;
    {
        try
        {
            Bureaucrat  billy("billy", 151);
            Form        contrat("contrat", 151, 45);

            billy.signForm(contrat);
            billy.signForm(contrat);
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Form::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Form::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}
