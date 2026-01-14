#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : m_target(target), AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Constructor called for " << m_target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &oth) : m_target(oth.m_target), AForm(oth)
{
	std::cout << "Copy Constructor called for " << m_target << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &oth)
{

	std::cout << "Assignet Constructor called for Bureaucrat " << m_target << std::endl;
	if (this != &oth)
	{
		AForm::operator=(oth);
		m_target = oth.m_target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called for " << m_target << std::endl;
}

const std::string ShrubberyCreationForm::getTarget() const
{
	return m_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{

}
