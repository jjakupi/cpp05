#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	 m_target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &oth);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &oth);
		~PresidentialPardonForm();

		const std::string	getTarget() const;
		void execute(Bureaucrat const & executor) const ;
};
#endif
