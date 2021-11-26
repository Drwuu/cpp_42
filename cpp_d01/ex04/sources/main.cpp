/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:07:16 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/26 11:27:23 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.replace.hpp"


int main(int argc, char **argv)
{
	if (argc != 4)
		cout << "Usage: filename s1 s2\n";
	else
	{
		Replace	replace(argv[1], argv[2], argv[3]);
		if (replace.searchAndReplace())
		{
			cout << "Usage: filename s1 s2\n";
			return 0;
		}
	}
	return 0;
}
