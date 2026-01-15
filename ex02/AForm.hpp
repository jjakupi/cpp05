#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
	private:
		std::string const	m_name;
		int			const	m_grade_si;
		int			const	m_grade_ex;
		bool				m_signed;

	public:
		AForm();
		AForm(const std::string name, const int grade_s, const int grade_ex);
		AForm(AForm const &oth);
		AForm &operator=(AForm const &oth);
		~AForm();

		std::string	getName(void) const;
		int			getSignedGrade(void) const;
		int			getExecutedGrade(void) const;
		bool		get_S_Bool_Grade(void) const;

		void		beSigned(Bureaucrat &oth);

		virtual void execute(Bureaucrat const & executor) const = 0;

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

		class FormNotSignedException : public std::exception
		{
			public :

				virtual const char * what() const throw()
				{
					return ("the form is not signed :)");
				}
		};

};

std::ostream &operator<<(std::ostream &ostr, const AForm &src);

#endif
