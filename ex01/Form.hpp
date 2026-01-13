#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
	private:
		std::string const	m_name;
		int			const	m_grade_si;
		int			const	m_grade_ex;
		bool				m_signed;

	public:
		Form();
		Form(const std::string name, const int grade_s, const int grade_ex);
		Form(Form const &oth);
		Form &operator=(Form const &oth);
		~Form();

		std::string	getName(void) const;
		int			getSignedGrade(void) const;
		int			getExecutedGrade(void) const;
		bool		get_S_Bool_Grade(void) const;

		void		beSigned(Bureaucrat &oth);

		class GradeTooLowException : public std::exception
		{
			public :

				virtual const char * what() const throw()
				{
					return ("The grade is too low");
				}
		};

		class GradeTooHighException : public std::exception
		{
			public :

				virtual const char * what() const throw()
				{
					return ("The grade is too high");
				}
		};

		class FormAlreadySignedException : public std::exception
		{
			public :

				virtual const char * what() const throw()
				{
					return ("the form is already signed :)");
				}
		};
};

std::ostream &operator<<(std::ostream &ostr, const Form &src);

#endif
