#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    {
        std::cout << "\033[94m//Correct tests \033[0m" << std::endl;
        try {

            Intern someRandomIntern;
            AForm *form;
            AForm *copy;
            form = someRandomIntern.makeForm("Robotomy Request", "Bender");
            copy = form;
            if (form)
            {
                std::cout << *form << std::endl;
                std::cout << *copy << std::endl;
                delete form;
            }
        }
        catch(const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "\n";
    }
}
