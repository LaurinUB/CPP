/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:12:49 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/03 17:09:42 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	pos_ = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	force_input(std::string arg, std::string field)
{
	while (arg.empty() && !std::cin.eof())
	{
		std::getline(std::cin, arg, '\n');
		if (arg.empty() && !std::cin.eof())
			std::cout << RED << field << " cant be empty!" << std::endl
				<< GREEN "Enter " << field << ": " RESET;
	}
}

void	print_msg(std::string arg, std::string field)
{
	if (!std::cin.eof())
		std::cout << GREEN "Enter " << field << ": " RESET;
	force_input(arg, field);
}

void	PhoneBook::add_contact(void)
{
	std::string	arg;

	print_msg(arg, "first name");
	this->contact[pos_ % 8].set_first_name(arg);
	print_msg(arg, "last name");
	this->contact[pos_ % 8].set_last_name(arg);
	print_msg(arg, "nickname");
	this->contact[pos_ % 8].set_nickname(arg);
	print_msg(arg, "phone number");
	this->contact[pos_ % 8].set_phone_number(arg);
	print_msg(arg, "darkest secret");
	this->contact[pos_ % 8].set_darkest_secret(arg);
	if (!std::cin.eof())
		std::cout << GREEN "contact added!" RESET << std::endl;
	pos_++;
}
