#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Constructor called " << m_name << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &oth)
{
	//this->m_name = oth.m_name;
	//or
	*this = oth;
	std::cout << "Copy Constructor called for Bureaucrat " << m_name << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &oth)
{
	if (this != &oth)
		this->m_name = oth.m_name;
	return *this;
	std::cout << "Assignet Constructor called for Bureaucrat " << m_name << std::endl;
	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called " << m_name << std::endl;
}

int Bureaucrat::getGrade(void) const
{
	if(m_grade < 1)
		std::cout << "Grade cant be under '1'" << std::endl;
	else if(m_grade > 150)
		std::cout << "Grade cant be over '150'" << std::endl;
	else
		return m_grade;
}

std::string Bureaucrat::getName(void) const
{
	return m_name;
}
