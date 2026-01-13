#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : m_name(name), m_grade(grade)
{
	if(m_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (m_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << "Bureaucrat Constructor called " << m_name << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &oth) : m_name(oth.m_name)
{
	std::cout << "Copy Constructor called for Bureaucrat " << m_name << std::endl;
	m_grade = oth.m_grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &oth)
{
	if (this != &oth)
		m_grade = oth.m_grade;
	std::cout << "Assignet Constructor called for Bureaucrat " << m_name << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called for " << m_name << std::endl;
}

void Bureaucrat::decrementGrade()
{
	m_grade += 1;
	if(m_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void Bureaucrat::incrementGrade()
{
	m_grade -= 1;
	if (m_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}
int Bureaucrat::getGrade(void) const
{
		return m_grade;
}

std::string Bureaucrat::getName(void) const
{
	return m_name;
}

std::ostream &	operator<<(std::ostream & ostr, Bureaucrat const & src)
{
	ostr << src.getName() << ", Bureaucrat grade " << src.getGrade();
	return (ostr);
}

void Bureaucrat::signForm(Form &src)
{
	try
	{
		src.beSigned(*this);
		std::cout << this->getName() << " signed " << src.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << src.getName() << " because " << e.what() << std::endl;
	}
}
