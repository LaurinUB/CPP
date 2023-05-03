/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:16:47 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/03 09:47:13 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void	loop(PhoneBook book)
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
			book.add_contact();
			std::cout << "Contact added!" << std::endl;
		}
		else if (!arg.compare("SEARCH"))
			std::cout << "You are searching" << std::endl;
	}
}

int	main(void)
{
	PhoneBook	book;

	loop(book);	
	return (0);	
}
