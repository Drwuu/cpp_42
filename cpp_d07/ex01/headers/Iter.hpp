/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:42:56 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/02 20:38:43 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void	print(T const &src)
{
	std::cout << src << std::endl;
}

template <typename T>
void	iter(T const *address, unsigned int const len, void(*fun)(T const &src))
{
	for (unsigned int i = 0 ; i < len; i++)
		fun(address[i]);
}
