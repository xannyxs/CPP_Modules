//
// Created by Xander Voorvaart on 8/24/22.
//

#ifndef CPP05_ROBOTOMYREQUESTFORM_H
#define CPP05_ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

#include <fstream>
#include <random>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(const std::string&);
	RobotomyRequestForm(const RobotomyRequestForm& ref);
	~RobotomyRequestForm(void);

	RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);

	void execute(const Bureaucrat& executor) const;

private:
	const std::string	_target;
};


#endif //CPP05_ROBOTOMYREQUESTFORM_H
