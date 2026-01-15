#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), m_target(target)
{
	//std::cout << "ShrubberyCreationForm Constructor called for " << m_target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &oth) : AForm(oth), m_target(oth.m_target)
{
	//std::cout << "Copy Constructor called for " << m_target << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &oth)
{

	//std::cout << "Assignet Constructor called for Bureaucrat " << m_target << std::endl;
	if (this != &oth)
	{
		AForm::operator=(oth);
		m_target = oth.m_target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "ShrubberyCreationForm Destructor called for " << m_target << std::endl;
}

const std::string ShrubberyCreationForm::getTarget() const
{
	return m_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(!get_S_Bool_Grade())
		throw(FormNotSignedException());
	if(executor.getGrade() > getExecutedGrade())
		throw (AForm::GradeTooLowException());
	std::string file_name = m_target + "_shrubbery";
	std::ofstream outfile(file_name.c_str());
	outfile << TREE << std::endl;
	outfile.close();
}
