#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : m_target(target), AForm("PresidentialPardonForm", 72, 45)
{
	std::cout << "Constructor called for PresidentialPardonForm " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &oth) : m_target(oth.m_target), AForm(oth)
{
	std::cout << "Copy Constructor called for PresidentialPardonForm " << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &oth)
{

	std::cout << "Assignet Constructor called for PresidentialPardonForm "  << std::endl;
	if (this != &oth)
	{
		AForm::operator=(oth);
		m_target = oth.m_target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor called for PresidentialPardonForm " << std::endl;
}

const std::string PresidentialPardonForm::getTarget() const
{
	return m_target;
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	
}
