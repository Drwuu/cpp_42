/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.replace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:11:49 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/20 17:43:51 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.replace.hpp"
#include <cstdlib>

Replace::Replace(std::string file, std::string s1, std::string s2):
_file(file), _s1(s1), _s2(s2)
{
	_fileOutput = _file + ".replace";
}

Replace::~Replace()
{

}

void	Replace::fillContent(void)
{
	string	line;

	_file_in.open(_file);
	if (_file_in.is_open())
	{
		while (getline(_file_in, line))
		{
			_file_content += line;
			if (!_file_in.eof())
				_file_content += "\n";
		}
		_file_in.close();
	}
	else
	{
		cout << "file in error\n";
		exit(EXIT_FAILURE);
	}
}

void	Replace::sendContent(void)
{
	string	line;

	_file_out.open(_fileOutput);
	if (_file_out.is_open())
	{
		_file_out << _file_content;
		_file_out.close();
	}
	else
	{
		cout << "file out error\n";
		exit(EXIT_FAILURE);
	}
}

std::string	Replace::replaceAll( std::string const &file_content, std::string const &s1, std::string const &s2)
{
	std::string result;
	std::string::const_iterator cbegin = file_content.begin();
	std::string::const_iterator cend = file_content.end();
	std::string::const_iterator s1begin = s1.begin();
	std::string::const_iterator s1end = s1.end();
	std::string::const_iterator search = std::search(cbegin, cend, s1begin, s1end);

	while (search != cend)
	{
		result.append(cbegin, search);
		result.append(s2);
		cbegin = search + s1.size();
		search = std::search(cbegin, cend, s1begin, s1end);
	}
	result.append(cbegin, search);
	return result;
}

int	Replace::searchAndReplace(void)
{
	int ret;
	if ((ret = _s1.empty()))
		cout << "s1 is empty" << endl;
	if ((ret = _s2.empty()))
		cout << "s2 is is empty" << endl;
	if ((ret = _file.empty()))
		cout << "file is empty" << endl;
	if (ret)
		return 1;
	fillContent();
	_file_content = replaceAll(_file_content, _s1, _s2);
	sendContent();
	return 0;
}
