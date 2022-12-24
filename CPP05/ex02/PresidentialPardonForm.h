//
// Created by Xander Voorvaart on 8/24/22.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_H
#define CPP05_PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(const std::string&);
	PresidentialPardonForm(const PresidentialPardonForm& ref);
	~PresidentialPardonForm(void);

	PresidentialPardonForm& operator=(const PresidentialPardonForm& ref);

	void execute(const Bureaucrat& executor) const;

private:
	const std::string	_target;
};


#endif //CPP05_PRESIDENTIALPARDONFORM_H
