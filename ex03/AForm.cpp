#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : m_name("Default"), m_grade_si(150), m_grade_ex(150), m_signed(false)
{
	//std::cout << "AForm Constructor called for " << m_name << std::endl;
}

AForm::AForm(const std::string name, const int grade_s, const int grade_ex): m_name(name), m_grade_si(grade_s), m_grade_ex(grade_ex), m_signed(false)
{
	if(grade_s < 1 || grade_ex < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade_s > 150 || grade_ex > 150)
		throw (Bureaucrat::GradeTooLowException());
	//std::cout << "AForm Constructor called for " << m_name << std::endl;
}

AForm::AForm(AForm const &oth) : m_name(oth.m_name), m_grade_si(oth.m_grade_si), m_grade_ex(oth.m_grade_ex)
{
	//std::cout << "AForm Copy Constructor called for " << m_name << std::endl;
	m_signed = oth.m_signed;
}

AForm &AForm::operator=(AForm const &oth)
{
	if (this != &oth)
		m_signed = oth.m_signed;
	//std::cout << "AForm Assignet Constructor called for AForm " << m_name << std::endl;
	return *this;
}

AForm::~AForm()
{
	//std::cout << "AForm Destructor called for " << m_name << std::endl;
}

std::string AForm::getName(void) const
{
	return m_name;
}

int	AForm::getSignedGrade(void) const
{
	return(m_grade_si);
}

int	AForm::getExecutedGrade(void) const
{
	return(m_grade_ex);
}
bool AForm::get_S_Bool_Grade(void) const
{
	return(m_signed);
}

void AForm::beSigned(Bureaucrat &oth)
{
	if(m_signed == true)
		throw(FormAlreadySignedException());
	if (oth.getGrade() > m_grade_si)
		throw (AForm::GradeTooLowException());
	m_signed = true;
}


std::ostream &operator<<(std::ostream &ostr, AForm const &src)
{
	ostr	<< "AForm name: " << src.getName() << std::endl;
	ostr	<< "Signed: "	<< (src.get_S_Bool_Grade() ? "yes" : "no") << std::endl;
	ostr	<< "Grade to sign: " << src.getSignedGrade() << std::endl;
	ostr	<< "Grade to execute: " << src.getExecutedGrade() << std::endl;
	return ostr;
}
