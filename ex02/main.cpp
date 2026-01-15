#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	{
		std::cout << "Presidential test 1:" << std::endl;
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
			std::cout << "Presidential test 2:\n";

			Bureaucrat				boss1("Boss1", 40);
			PresidentialPardonForm	me1("TTTTT");

			std::cout << me1 << std::endl;

			boss1.signForm(me1);
			boss1.executeForm(me1);
			std::cout << "\n";
			std::cout << "//Boss1 couldnt get pardoned cuz the grade was 40 but after assignment from Boss(grade 5) he will get pardoned //\n"<< std::endl;
			boss1 = boss; //assignment of the boss1 from boss just to check
			me1 = me;
			boss1.signForm(me1);
			boss1.executeForm(me1);
			std::cout << "\n";
		}
		catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "\033[94m///////////////////////////////////////////////////\n\033[0m";
	{
	std::cout << "Robotomy test 1 :" << std::endl;
	try
	{
		Bureaucrat			hea("Eng", 40);
		RobotomyRequestForm	rro("RRO");

		std::cout << hea << std::endl;
		std::cout << rro << std::endl;
		hea.signForm(rro);
		for (int i = 0; i < 10; i++)
			hea.executeForm(rro);
		std::cout << "\n";
		std::cout << "Robotomy test 2 :" << std::endl;
		Bureaucrat			hea11("Eng11", 40);
		RobotomyRequestForm	rro11("RRO11");

		std::cout << hea11 << std::endl;
		std::cout << rro11 << std::endl;
		hea11.signForm(rro11);
		hea11.executeForm(rro11);
		std::cout << "\n";
		Bureaucrat t22(hea11);
		RobotomyRequestForm	v22(rro11);
		std::cout << t22 << std::endl;
		std::cout << v22 << std::endl;
		t22.signForm(v22);
		t22.executeForm(v22);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n";
	}
	std::cout << "\033[94m///////////////////////////////////////////////////\n\033[0m";
	{
	std::cout << "Shrubbery test 1 :" << std::endl;
	try
	{
		Bureaucrat			hea("Eng", 130);
		ShrubberyCreationForm	rro("RRO");

		std::cout << hea << std::endl;
		std::cout << rro << std::endl;
		hea.signForm(rro);
		hea.executeForm(rro);
		std::cout << "\n";

		// std::cout << "Shrubbery test 2 :" << std::endl;
		// Bureaucrat			hea11("Eng11", 40);
		// RobotomyRequestForm	rro11("RRO11");

		// std::cout << hea11 << std::endl;
		// std::cout << rro11 << std::endl;
		// hea11.signForm(rro11);
		// hea11.executeForm(rro11);
		// std::cout << "\n";
		// Bureaucrat t22(hea11);
		// RobotomyRequestForm	v22(rro11);
		// std::cout << t22 << std::endl;
		// std::cout << v22 << std::endl;
		// t22.signForm(v22);
		// t22.executeForm(v22);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	}
	return 0;
}
