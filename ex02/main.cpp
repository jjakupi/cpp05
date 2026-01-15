#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	{
		std::cout << "PresidentialPardonForm test 1:" << std::endl;
		try {
			Bureaucrat				boss("Boss", 5);
			PresidentialPardonForm	me("TTTTT");

			std::cout << me << std::endl;

			boss.signForm(me);
			boss.executeForm(me);
			std::cout << "\n";
			std::cout << me << std::endl;
			boss.signForm(me);
			boss.executeForm(me);

			std::cout << "-------------------------------------\n";
			std::cout << "PresidentialPardonForm test 2:\n";

			Bureaucrat				boss1("Boss1", 20);
			//Bureaucrat				boss1("Boss1", 30);
			PresidentialPardonForm	me1("TTTTT");

			std::cout << me1 << std::endl;

			boss1.signForm(me1);
			boss1.executeForm(me1);
			std::cout << "\n";
			std::cout << me1 << std::endl;
			boss1.signForm(me1);
			boss1.executeForm(me1);
		}
		catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
		}
		std::cout << "\n";
	}
	return 0;
}
