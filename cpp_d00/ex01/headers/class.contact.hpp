/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.contact.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:04:23 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/18 10:16:01 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	std::string			datas[5];
	std::string	static	fields_name[5];

public:
	Contact();
	~Contact();

	void	set_contact();
	bool	is_valid_datas(int index);
	bool	is_valid_phoneNumber(std::string data);
	bool	is_valid_birthday(std::string data);
	void	display_contacts_infos(int index);
	void	display(int index);
};

#endif
