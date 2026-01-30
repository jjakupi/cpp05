#include "Intern.hpp"

Intern::Intern()
{
	//std::cout << "Constructor called for Intern " << std::endl;
}

Intern::Intern(Intern const &oth)
{
	//std::cout << "Copy Constructor called for Intern " << std::endl;
	*this = oth;
}

Intern &Intern::operator=(Intern const &oth)
{
	//std::cout << "Assignet Constructor called for Intern "  << std::endl;
	if (this != &oth)
		return *this;
}

AForm*	Intern::makePresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}
AForm*	Intern::makeShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}
AForm*	Intern::makeRobot(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::makeForm(std::string name_of_form, std::string target)
{
	std::string names[3] = {"Shrubbery Request", "Robotomy Request", "Presidential"};

	AForm* (Intern::*funcs[3])(std::string) =
	{
		&Intern::makeShrubbery,
		&Intern::makeRobot,
		&Intern::makePresidential
	};
	for (int i = 0; i < 3; i++)
	{
		if(name_of_form == names[i])
		{
			return (this->*funcs[i])(target);
		}
	}
	throw(WrongFormException());
}

Intern::~Intern()
{
	//std::cout << "Destructor called for Intern " << std::endl;
}

