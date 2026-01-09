#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{

	private:
		std::string const m_name ;
		int m_grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &oth);
		Bureaucrat &operator=(Bureaucrat const &oth);

		std::string	getName(void) const;
		int	getGrade(void) const;
};

#endif
