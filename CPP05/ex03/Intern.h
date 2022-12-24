//
// Created by Xander Voorvaart on 8/25/22.
//

#ifndef CPP05_INTERN_H
#define CPP05_INTERN_H

#include <string>
#include <stdexcept>

#include "Form.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern& ref);
	~Intern(void);

	Intern& operator=(const Intern& ref);

	Form* makeForm(std::string, const std::string&);

	class TargetNotValidException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};


#endif //CPP05_INTERN_H
