/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:16:47 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/06 11:24:10 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void	input_loop(PhoneBook book)
{
	std::string	arg;

	while (!std::cin.eof())
	{
		std::cout << "Enter your command here: ";
		std::getline(std::cin, arg, '\n');
		if (!arg.compare("EXIT"))
			break;
		else if (!arg.compare("ADD"))
			book.add_contact();
		else if (!arg.compare("SEARCH"))
			book.showall();
	}
}

int	main(void)
{
	PhoneBook	book;

	input_loop(book);	
	return (0);	
}
