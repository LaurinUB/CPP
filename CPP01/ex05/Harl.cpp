/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:43:05 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/13 14:08:15 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->functions_[0] = &Harl::debug;
	this->functions_[1] = &Harl::info;
	this->functions_[2] = &Harl::warning;
	this->functions_[3] = &Harl::error;

	this->levels_[0] = "debug";
	this->levels_[1] = "info";
	this->levels_[2] = "warning";
	this->levels_[3] = "error";
}

Harl::~Harl(void)
{

}

void	Harl::debug(void)
{
	std::cout << GREEN "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 8XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" WHITE << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << GREEN "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl; 
	std::cout <<"If you did, I wouldn’t be asking for more!" WHITE << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << GREEN "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." WHITE << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << GREEN "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." WHITE << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (!level.compare(levels_[i]))
		{
			(this->*functions_[i])();
			return;
		}

	std::cout << RED "This [ " << level << " ] is not a complain!" WHITE << std::endl;
}
