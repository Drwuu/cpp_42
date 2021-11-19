/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:45:16 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/16 17:51:04 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>
#include <iostream>

void	megaphone(int argc, char *argv[])
{
	for (int i = 1; i < argc; i ++)
		for (int j = 0; j < (int)strlen(argv[i]); j++)
			std::cout << (char)toupper(argv[i][j]);
	std::cout << std::endl;
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		megaphone(argc, argv);
	return (0);
}
