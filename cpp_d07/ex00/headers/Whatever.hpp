/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:33:42 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/03 13:33:42 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>


template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const	&min(T &a, T &b)
{
	if (a > b)
		return b;
	else
		return a;
}

template<typename T>
T const	&max(T &a, T &b)
{
	if (a > b)
		return a;
	else
		return b;
}
