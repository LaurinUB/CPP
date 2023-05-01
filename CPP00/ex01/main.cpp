/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:16:47 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/01 17:32:50 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

void	loop(void)
{
	std::string	arg;

	while (1)
	{
		std::cout << "Enter your command here: ";
		std::getline(std::cin, arg);
		if (arg.empty())
			break;
		std::cout << "you entered: [ " << arg << " ]" << std::endl;
		if (!arg.compare("EXIT"))
			break;
		else if (!arg.compare("ADD"))
		{
			std::cout << "Type in the Contact you want to add:" << std::endl;
			std::getline(std::cin, arg);
			std::cout << "You added: " << arg << std::endl;
		}
		else if (!arg.compare("SEARCH"))
			std::cout << "You are searching" << std::endl;
	}
}

int	main(void)
{
	PhoneBook	book;
	Contact		list;

	loop();	
	return (0);	
}
