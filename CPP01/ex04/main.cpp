/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 12:41:38 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/27 14:47:13 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "Replace.hpp"

#define ERROR 1
#define SUCCES 0

int32_t	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "I need 4 arguments" << std::endl;
		return (ERROR);
	}
	Replace	file;
	file.setS1(argv[2]);
	file.setS2(argv[3]);
	file.setFileStream(argv[1]);
	file.setFileName(argv[1]);
	file.Replacer();
	return (SUCCES);
}
