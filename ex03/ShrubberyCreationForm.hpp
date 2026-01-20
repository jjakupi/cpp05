#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#define TREE "                      /\\\n    				 /**\\\n					/****\\\n				   /******\\\n					  ||\n				      ||\n					    "

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

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
		virtual void execute(Bureaucrat const & executor) const ;

};

#endif
