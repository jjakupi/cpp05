#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

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
		
};

#endif
