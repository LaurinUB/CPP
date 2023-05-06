/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:16:47 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/06 13:23:44 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	book;
	std::string	arg;

	while (!std::cin.eof())
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, arg, '\n');
		if (!arg.compare("EXIT"))
			break;
		else if (!arg.compare("ADD"))
			book.add_contact();
		else if (!arg.compare("SEARCH"))
		{
			if (book.contact[0].get_first_name().empty())
				std::cout << RED "No contact saved!" RESET << std::endl;
			else
				book.showall();
		}
	}
	return (0);	
}
