#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : m_target(target), AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "Constructor called for RobotomyRequestForm " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &oth) : m_target(oth.m_target), AForm(oth)
{
	std::cout << "Copy Constructor called for RobotomyRequestForm " << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &oth)
{

	std::cout << "Assignet Constructor called for Bureaucrat RobotomyRequestForm "<< std::endl;
	if (this != &oth)
	{
		AForm::operator=(oth);
		m_target = oth.m_target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called for RobotomyRequestForm " << std::endl;
}

const std::string RobotomyRequestForm::getTarget() const
{
	return m_target;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

}
