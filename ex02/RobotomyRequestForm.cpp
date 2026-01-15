#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), m_target(target)
{
	//std::cout << "Constructor called for RobotomyRequestForm " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &oth) : AForm(oth), m_target(oth.m_target)
{
	//std::cout << "Copy Constructor called for RobotomyRequestForm " << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &oth)
{

	//std::cout << "Assignet Constructor called for Bureaucrat RobotomyRequestForm "<< std::endl;
	if (this != &oth)
	{
		AForm::operator=(oth);
		m_target = oth.m_target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "Destructor called for RobotomyRequestForm " << std::endl;
}

const std::string RobotomyRequestForm::getTarget() const
{
	return m_target;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(!get_S_Bool_Grade())
		throw(FormNotSignedException());
	if(executor.getGrade() > getExecutedGrade())
	{
		throw (AForm::GradeTooLowException());
	}
	std::cout << "Drill drill bbbb" << std::endl;
	if(rand() % 2)
	{
		std::cout << m_target << " has been robotomized successfully 50% of the time." << std::endl;
	}
	else
		std::cout << "Robotomy failed on " << m_target << std::endl;
}
