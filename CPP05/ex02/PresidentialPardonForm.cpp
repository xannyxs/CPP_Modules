//
// Created by Xander Voorvaart on 8/24/22.
//

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(const std::string& new_target)
		: Form("PresidentialPardonForm", 25, 5), _target(new_target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref)
		: Form("PresidentialPardonForm", 25, 5)
{
	*this = ref;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

// Operators

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
	(void) ref;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	(void) executor;
	std::cout << "Informs that " << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}
