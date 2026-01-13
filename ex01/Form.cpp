#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int grade_s, const int grade_ex): m_name(name), m_grade_si(grade_s), m_grade_ex(grade_ex), m_signed(false)
{
	if(grade_s < 1 || grade_ex < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade_s > 150 || grade_ex > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << "Form Constructor called for " << m_name << std::endl;
}

Form::Form(Form const &oth) : m_name(oth.m_name), m_grade_si(oth.m_grade_si), m_grade_ex(oth.m_grade_ex)
{
	std::cout << "Copy Constructor called for " << m_name << std::endl;
	m_signed = oth.m_signed;
}

Form &Form::operator=(Form const &oth)
{
	if (this != &oth)
		m_signed = oth.m_signed;
	std::cout << "Assignet Constructor called for Bureaucrat " << m_name << std::endl;
	return *this;
}

Form::~Form()
{
	std::cout << "Form Destructor called for " << m_name << std::endl;
}

std::string Form::getName(void) const
{
	return m_name;
}

int	Form::getSignedGrade(void) const
{
	return(m_grade_si);
}

int	Form::getExecutedGrade(void) const
{
	return(m_grade_ex);
}
bool Form::get_S_Bool_Grade(void) const
{
	return(m_signed);
}

void Form::beSigned(Bureaucrat &oth)
{
	if(m_signed == true)
		throw(FormAlreadySignedException());
	if (oth.getGrade() > m_grade_si)
		throw (Form::GradeTooLowException());
	m_signed = true;
}

std::ostream &operator<<(std::ostream &ostr, Form const &src)
{
	ostr	<< "Form name: " << src.getName()
			<< ", signed: "	<< (src.get_S_Bool_Grade() ? "yes" : "no")
			<< ", grade to sign: " << src.getSignedGrade()
			<< ", grade to execute: " << src.getExecutedGrade();
	return ostr;
}
