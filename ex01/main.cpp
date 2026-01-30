#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		std::cout << "TEST 1" << std::endl;
		Bureaucrat boss("Boss", 9);
		Form tax("Tax Form", 9, 1); //grade to execute nuk perdoret ende ketu po egizston per ex02..
		std::cout << "\n";
		boss.signForm(tax);
		std::cout << tax << std::endl;
		std::cout << "\033[34mTrying to resign the form twice will throw an exeption that is already signed\033[0m" << std::endl;
		boss.signForm(tax);
		std::cout << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "TEST 2" << std::endl;
		Bureaucrat intern("Intern", 150);
		Form secret("Secret Form", 10, 5);
		std::cout << "\n";
		intern.signForm(secret);
		std::cout << secret << std::endl;
		std::cout << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "TEST 3: INVALID FORM" << std::endl;
		Form wrong("Wrong Form", 0, 200);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "\n";
	try
	{
		Bureaucrat boss("Boss", 1);
		Form original("Original", 50, 20);
		std::cout << "\n";
		std::cout << "Original before sign: " << original << std::endl;
		boss.signForm(original);
		std::cout << "Original after sign : " << original << std::endl;

		Form copy(original); // copy constructor
		std::cout << "Copy after copying   : " << copy << std::endl;
		std::cout << "\n";

	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "\n";
	try
	{
		Bureaucrat boss("Boss", 1);

		Form left("LEFT", 60, 30);
		Form right("RIGHT", 10, 5);

		// Nënshkruaj vetëm RIGHT që të ketë signed=true
		boss.signForm(right);
		std::cout << "\n";
		std::cout << "Before assignment:\n";
		std::cout << "left : " << left << std::endl;
		std::cout << "right: " << right << std::endl;
		std::cout << "\n";
		left = right; // assignment
		std::cout << "\n";
		std::cout << "After assignment:\n";
		std::cout << "left : " << left << std::endl;
		std::cout << "right: " << right << std::endl;
		std::cout << "\n";
		/*
			Pritshmëria OOP për këtë ushtrim:
			- Emri i left (m_name) NUK ndryshon (është const)
			- Gradat e left (m_grade_si, m_grade_ex) NUK ndryshojnë (janë const)
			- Vetëm m_signed kopjohet (sepse ai nuk është const)
		*/
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}

