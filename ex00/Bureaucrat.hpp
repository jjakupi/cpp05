#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{

	private:
		std::string const	m_name ;
		int					m_grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const &oth);
		Bureaucrat &operator=(Bureaucrat const &oth);

		std::string	getName(void) const;
		int			getGrade(void) const;

		void		incrementGrade();
		void		decrementGrade();
		class GradeTooLowException : public std::exception
		{
			public :

				virtual const char * what() const throw()
				{
					return ("The grade cant be over 150");
				}
		};

		class GradeTooHighException : public std::exception
		{
			public :

				virtual const char * what() const throw()
				{
					return ("The grade cant be below 1");
				}
		};
};
std::ostream &	operator<<(std::ostream & ostr, Bureaucrat const & src);

#endif
