#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), m_target(target)
{
	//std::cout << "Constructor called for PresidentialPardonForm " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &oth) : AForm(oth), m_target(oth.m_target)
{
	//std::cout << "Copy Constructor called for PresidentialPardonForm " << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &oth)
{

	//std::cout << "Assignet Constructor called for PresidentialPardonForm "  << std::endl;
	if (this != &oth)
	{
		AForm::operator=(oth);
		m_target = oth.m_target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "Destructor called for PresidentialPardonForm " << std::endl;
}

const std::string PresidentialPardonForm::getTarget() const
{
	return m_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(!get_S_Bool_Grade())
		throw(FormNotSignedException());
	else if(executor.getGrade() > getExecutedGrade())
		throw (AForm::GradeTooLowException());
	else
		std::cout << m_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
