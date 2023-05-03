/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:12:49 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/03 09:44:36 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::add_contact(void)
{
	int			i;
	std::string	arg;

	i = 0;
	while (i < 8)
	{
		if (this->contact[i].get_first_name().empty())
		{
			std::cout << "Enter first name: ";
			std::cin >> arg; 
			this->contact[i].set_first_name(arg);
			std::cout << "Enter last name: ";
			std::cin >> arg;
			this->contact[i].set_last_name(arg);
			std::cout << "Enter nickname: ";
			std::cin >> arg;
			this->contact[i].set_nickname(arg);
			std::cout <<  "Enter phonenumber: ";
			std::cin >> arg;
			this->contact[i].set_phone_number(arg);
			std::cout <<  "Enter darkest secret: ";
			std::cin >> arg;
			this->contact[i].set_darkest_secret(arg);
			break;
		}
		i++;
	}
}
