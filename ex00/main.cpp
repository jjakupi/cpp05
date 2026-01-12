#include "Bureaucrat.hpp"

int main()
{
	{
		std::cout<< "Testing dhe grade lower than '150' " << "\n";
		try
		{
			Bureaucrat	Beaur1 = Bureaucrat("Me", 150);
			std::cout << Beaur1 << std::endl;
			Beaur1.incrementGrade();
			std::cout << Beaur1 << std::endl;
			Beaur1.decrementGrade();
			std::cout << Beaur1 << std::endl;
			Beaur1.decrementGrade();
			std::cout << Beaur1 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\n";
		std::cout<< "Testing dhe grade lower than '1' " << "\n";

		try
		{
			Bureaucrat	Beaur1 = Bureaucrat("You", 1);
			std::cout << Beaur1 << std::endl;
			Beaur1.decrementGrade();
			std::cout << Beaur1 << std::endl;
			Beaur1.incrementGrade();
			std::cout << Beaur1 << std::endl;
			Beaur1.incrementGrade();
			std::cout << Beaur1 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Bureaucrat	Beaur1 = Bureaucrat("You", 1);
			Bureaucrat	Beaur2 = Bureaucrat("Me", 2);;

			Beaur2 = Beaur1;
			std::cout << Beaur1 << std::endl;
			std::cout << Beaur2 << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
