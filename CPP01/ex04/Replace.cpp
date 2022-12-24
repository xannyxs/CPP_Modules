/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 12:48:23 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/22 19:11:32 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

#define ERROR 1

Replace::Replace()
{
	return ;
}

Replace::~Replace(void)
{
	return ;
}

/* File */
void Replace::setFileName(std::string new_fileName)
{
	_file_name = new_fileName;
	return ;
}

bool Replace::is_empty(void)
{
	return (_file.peek() == std::ifstream::traits_type::eof());
}

void Replace::setFileStream(std::string new_File)
{
	if (_s1 == _s2)
	{
		std::cerr << "ERROR: string 1 is the same as string 2" << std::endl;
		exit(ERROR);
	}
	_file.open(new_File);
	if (!_file.is_open())
	{
		std::cerr << "ERROR: File does not exist" << std::endl;
		exit (ERROR);
	}
	if (is_empty() == true)
	{
		std::cerr << "ERROR: File is empty" << std::endl;
		exit (ERROR);
	}
	return ;
}

/* String 1 */
void Replace::setS1(std::string new_s1)
{
	_s1 = new_s1;
	return ;
}

/* String 2 */
void Replace::setS2(std::string new_s2)
{
	_s2 = new_s2;
	return ;
}

void Replace::Replacer(void)
{
	std::string		temp;
	std::ofstream	replacedFile(_file_name.append(".replace"));

	while (getline(_file, temp))
	{
		for (size_t pos = 0; pos < temp.length(); pos++)
		{
			if (temp.compare(pos, _s1.length(), _s1) == 0)
			{
				temp.erase(pos, _s1.length());
				temp.insert(pos, _s2);
			}
		}
		replacedFile << temp << std::endl;
	}
	_file.close();
	replacedFile.close();
	return ;
}
