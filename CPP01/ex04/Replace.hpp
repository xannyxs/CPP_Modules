/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 12:47:02 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2022/07/22 19:10:36 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>

class Replace
{
	private:
		std::ifstream	_file;
		std::string		_file_name;
		std::string		_s1;
		std::string		_s2;

	public:
		Replace(void);
		~Replace(void);

		void				setFileStream(std::string);
		void				setFileName(std::string);
		void				setS1(std::string);
		void				setS2(std::string);

		void				Replacer(void);
		bool				is_empty(void);
};
