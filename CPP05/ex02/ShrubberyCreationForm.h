//
// Created by Xander Voorvaart on 8/24/22.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_H
#define CPP05_SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(const std::string&);
	ShrubberyCreationForm(const ShrubberyCreationForm& ref);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);

	void execute(const Bureaucrat& executor) const;

private:
	const std::string	_target;
};


#endif //CPP05_SHRUBBERYCREATIONFORM_H
