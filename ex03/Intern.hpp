#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &oth);
		Intern &operator=(Intern const &oth);
		~Intern();

		AForm*	makePresidential(std::string target);
		AForm*	makeShrubbery(std::string target);
		AForm*	makeRobot(std::string target);

		AForm* makeForm(std::string name_of_form, std::string target);

		class WrongFormException : public std::exception
		{
			public :

				virtual const char * what() const throw()
				{
					return ("Wrong form try again :)");
				}
		};
};
#endif
