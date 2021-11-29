/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.replace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:11:49 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/29 11:28:38 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.replace.hpp"
#include <cstdlib>
#include <sys/_types/_size_t.h>

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

std::string	replace(std::string str, std::string to_replace, std::string by)
{
	std::string	result;
	size_t		found_index;

	if (to_replace.empty())
		return str;
	while ((found_index = str.find(to_replace)) != std::string::npos)
	{
		result.append(str.substr(0, found_index)).append(by);
		str.erase(0, found_index + to_replace.size());
	}
	result.append(str);
	return result;
}

int	Replace::searchAndReplace(void)
{
	int ret;
	if ((ret = _s1.empty()))
		cout << "s1 is empty" << endl;
	else if ((ret = _s2.empty()))
		cout << "s2 is empty" << endl;
	else if ((ret = _file.empty()))
		cout << "file is empty" << endl;
	if (ret)
		return 1;
	fillContent();
	_file_content = replace(_file_content, _s1, _s2);
	sendContent();
	return 0;
}
