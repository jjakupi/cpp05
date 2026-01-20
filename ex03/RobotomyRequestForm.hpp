#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		std::string	 m_target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &oth);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &oth);
		~RobotomyRequestForm();

		const std::string   getTarget() const;
		virtual void execute(Bureaucrat const & executor) const ;
};

#endif
