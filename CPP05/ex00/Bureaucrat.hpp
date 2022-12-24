//
// Created by Xander Voorvaart on 8/23/22.
//

#ifndef CPP05_BUREAUCRAT_HPP
#define CPP05_BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
public:
	Bureaucrat(std::string, int32_t);
	Bureaucrat(const Bureaucrat& ref);
	~Bureaucrat(void);

	Bureaucrat& operator=(const Bureaucrat& ref);

	int32_t	getGrade(void) const;
	const std::string&	getName(void) const;
	void promote(void);
	void demote(void);

	// Exceptions
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

private:
	const std::string	_name;
	int32_t				_grade;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& ref);

#endif //CPP05_BUREAUCRAT_HPP
