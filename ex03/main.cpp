#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
		std::cout << "\033[94m//Wrong name test \033[0m" << std::endl;
		try
		{
			Intern someRandomIntern;
			AForm *form0;
			Bureaucrat boss11("Boss11", -1);//can sign & execute anything
			form0 = someRandomIntern.makeForm("Wrong name", "x");
			if (form0)
			{
				std::cout << *form0 << std::endl;
				boss11.signForm(*form0);
				boss11.executeForm(*form0);
				delete form0;
			}

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\n";
			std::cout << "\033[94m//Correct tests with Robotomy requests:\033[0m" << std::endl;
			try
			{
				Intern someRandomIntern;
				AForm *form;
				Bureaucrat boss11("Boss11", -80);//grade too high
				form = someRandomIntern.makeForm("robotomy request", "Bender");
				if (form)
				{
					std::cout << *form << std::endl;
					boss11.signForm(*form);
					boss11.executeForm(*form);
					delete form;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\n";
			try
			{
				Intern someRandomIntern0;
				AForm *form0;
				Bureaucrat boss00("Boss00", 3);//can sign & execute anything
				form0 = someRandomIntern0.makeForm("robotomy request", "Bender0");
				if (form0)
				{
					boss00.signForm(*form0);
					boss00.executeForm(*form0);
					delete form0;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\n";
	 		try
			{
				Intern someRandomIntern1;
				AForm *form1;
				Bureaucrat boss12("Boss12", 46);//can sign but cant execute
				form1 = someRandomIntern1.makeForm("robotomy request", "Bender2");
				if(form1)
				{
					boss12.signForm(*form1);
					boss12.executeForm(*form1);
					delete form1;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\n";
			try
			{
				Intern someRandomIntern2;
				AForm *form2;
				Bureaucrat boss13("Boss13", 100); // can't sign & execute anything
				form2 = someRandomIntern2.makeForm("robotomy request", "Bender2");
				if(form2)
				{
					boss13.signForm(*form2);
					boss13.executeForm(*form2);
					delete form2;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\033[94m//Correct tests with Shrubbery Creation:\033[0m" << std::endl;
			try
			{
				Intern someRandomIntern;
				AForm *form;
				Bureaucrat boss11("Boss11", -80);//grade too high
				form = someRandomIntern.makeForm("shrubbery creation", "Bender");
				if (form)
				{
					std::cout << *form << std::endl;
					boss11.signForm(*form);
					boss11.executeForm(*form);
					delete form;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\n";
			try
			{
				Intern someRandomIntern0;
				AForm *form0;
				Bureaucrat boss00("Boss00", 3);//can sign & execute anything
				form0 = someRandomIntern0.makeForm("shrubbery creation", "Bender0");
				if (form0)
				{
					boss00.signForm(*form0);
					boss00.executeForm(*form0);
					delete form0;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\n";
			try
			{
				Intern someRandomIntern1;
				AForm *form1;
				Bureaucrat boss12("Boss12", 143);//can sign but cant execute
				form1 = someRandomIntern1.makeForm("shrubbery creation", "Bender2");
				if(form1)
				{
					boss12.signForm(*form1);
					boss12.executeForm(*form1);
					delete form1;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\n";
			try
			{
				Intern someRandomIntern2;
				AForm *form2;
				Bureaucrat boss13("Boss13", 150); // can't sign & execute anything
				form2 = someRandomIntern2.makeForm("shrubbery creation", "Bender2");
				if(form2)
				{
					boss13.signForm(*form2);
					boss13.executeForm(*form2);
					delete form2;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\033[94m//Correct tests with Presidential Pardon:\033[0m" << std::endl;
			try
			{
				Intern someRandomIntern;
				AForm *form;
				Bureaucrat boss11("Boss11", -80);//grade too high
				form = someRandomIntern.makeForm("presidential pardon", "Bender");
				if (form)
				{
					std::cout << *form << std::endl;
					boss11.signForm(*form);
					boss11.executeForm(*form);
					delete form;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\n";
			try
			{
				Intern someRandomIntern0;
				AForm *form0;
				Bureaucrat boss00("Boss00", 3);//can sign & execute anything
				form0 = someRandomIntern0.makeForm("presidential pardon", "Bender0");
				if (form0)
				{
					boss00.signForm(*form0);
					boss00.executeForm(*form0);
					delete form0;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\n";
			try
			{
				Intern someRandomIntern1;
				AForm *form1;
				Bureaucrat boss12("Boss12", 20);//can sign but cant execute
				form1 = someRandomIntern1.makeForm("presidential pardon", "Bender2");
				if(form1)
				{
					boss12.signForm(*form1);
					boss12.executeForm(*form1);
					delete form1;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			std::cout << "\n";
			try
			{
				Intern someRandomIntern2;
				AForm *form2;
				Bureaucrat boss13("Boss13", 100); // can't sign & execute anything
				form2 = someRandomIntern2.makeForm("presidential pardon", "Bender2");
				if(form2)
				{
					boss13.signForm(*form2);
					boss13.executeForm(*form2);
					delete form2;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
	return 0;
}
