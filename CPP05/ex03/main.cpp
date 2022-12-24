//
// Created by Xander Voorvaart on 8/23/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.h"

#define RED "\033[0;31m"
#define RESET "\033[0m"

int32_t	main(void)
{
	Intern Leon;
	Bureaucrat Jordan("Jordan", 1);

	std::cout << "SUCCES!" << std::endl;

	try
	{
		Form *f = Leon.makeForm("PresidentialPardonForm", "Xander");
		Jordan.signForm(*f);
		Jordan.executeForm(*f);
		delete f;
	}
	catch (const Intern::TargetNotValidException& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}
	catch (...)
	{

	}

	std::cout << std::endl << "FAIL!" << std::endl;

	try
	{
		Form *f = Leon.makeForm("Hi", "Xander");
		Jordan.signForm(*f);
		Jordan.executeForm(*f);
	}
	catch (const Intern::TargetNotValidException& e)
	{
		std::cout << RED << e.what() << RESET << '\n';
	}
	catch (...)
	{

	}
	return (0);
}
