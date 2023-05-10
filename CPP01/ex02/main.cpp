/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:55:43 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/10 15:07:52 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN.";
	std::string *brainPtr = &brain;
	std::string &brainRef = brain;
	
	std::cout << "Adress of the string:		"<< &brain << std::endl;
	std::cout << "Adress of the pointer:		" << &brainPtr << std::endl;
	std::cout << "Adress of the reference:	" << &brainRef << std::endl << std::endl;
	std::cout << "Value of string:		" << brain << std::endl;
	std::cout << "Value of pointer:		"<< *brainPtr << std::endl;
	std::cout << "Value of reference:		"<< brainRef << std::endl;
}
