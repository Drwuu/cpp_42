/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.phonebook.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 16:08:49 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/18 10:43:47 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_HPP
# define CLASS_PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "class.contact.hpp"

class Phonebook
{
private:
	Contact	contacts[8];
	void	display_contacts(void);
public:
	Phonebook();
	~Phonebook();

	int		index;
	void	start_phonebook(void);
	void	add_contact(int &index);
	void	search_contact(int index);
};

#endif
