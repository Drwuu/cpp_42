/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.replace.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:12:22 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/20 17:43:48 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <algorithm>

using namespace std;

class Replace
{
	private:
		string		_file;
		string		_fileOutput;
		string		_s1;
		string		_s2;
		string		_file_content;
		ifstream	_file_in;
		ofstream	_file_out;

		void		fillContent(void);
		void		sendContent(void);
		string		replaceAll(std::string const &content, \
					std::string const &s1, std::string const &s2);

	public:
		Replace(string file, string s1, string s2);
		~Replace();
		int	searchAndReplace(void);
};

#endif
