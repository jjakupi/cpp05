#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	 m_target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &oth);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &oth);
		~ShrubberyCreationForm();

		const std::string   getTarget() const;
	
};

#endif
