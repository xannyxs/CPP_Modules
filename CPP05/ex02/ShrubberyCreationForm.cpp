//
// Created by Xander Voorvaart on 8/24/22.
//

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& new_target)
	: Form("ShrubberyCreationForm", 145, 137), _target(new_target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref)
	: Form("ShrubberyCreationForm", 145, 137), _target(ref._target)
{
	*this = ref;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

// Operators

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
	(void) ref;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	(void) executor;
	std::ofstream MyFile(_target);

	MyFile << "ASCII TREES";
	MyFile.close();
}
