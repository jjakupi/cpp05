#include "Bureaucrat.hpp"

int main()
{
	{
		std::cout<< "Testing dhe grade with higher than '150' " << "\n";
		try
		{
			Bureaucrat	Beaur1 = Bureaucrat("Me", 150);
			std::cout << "\n";
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

		std::cout << "\n";
		std::cout<< "Testing the Assignment Operator:" << "\n";
		try
		{
			Bureaucrat	Beaur1 = Bureaucrat("You", 1);
			Bureaucrat	Beaur2 = Bureaucrat("Me", 2);
			std::cout << "\n";
			std::cout << "Before the assignment operator:" << std::endl;
			std::cout << Beaur1 << std::endl;
			std::cout << Beaur2 << std::endl;
			Beaur2 = Beaur1;
			std::cout << "\n";
			std::cout << "After the assignment operator:" << std::endl;
			std::cout << Beaur1 << std::endl;
			std::cout << Beaur2 << std::endl;
			std::cout << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "\n";
		std::cout<< "Testing the Copy Constructor: " << "\n";
		try
		{
			Bureaucrat	Beaur1 = Bureaucrat("You", 1);
			Bureaucrat	Beaur2(Beaur1);
			std::cout << "\n";
			std::cout << Beaur1 << std::endl;
			std::cout << Beaur2 << std::endl;
			std::cout << "\n";

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			Bureaucrat	Beaur1 = Bureaucrat("You", -1);
			Bureaucrat	Beaur2 = Bureaucrat("You", 150);

			std::cout << "\n";
			std::cout << Beaur1 << std::endl;
			std::cout << Beaur2 << std::endl;
			std::cout << "\n";

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
