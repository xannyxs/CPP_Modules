/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 15:16:55 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/08 16:38:57 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int32_t main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "String: " << std::hex << &str << std::endl;
	std::cout << "Pointer to string: " << std::hex << stringPTR << std::endl;
	std::cout << "Reference to string: " << std::hex << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "String: " << str << std::endl;
	std::cout << "Pointer to string: " << stringPTR << std::endl;
	std::cout << "Reference to string: " << stringREF << std::endl;
	return (0);
}