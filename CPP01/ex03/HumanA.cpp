/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:23:17 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/10 18:17:38 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void)
{
	return;
}

HumanA::HumanA(std::string name, Weapon &weapon): name_(name), weapon_(weapon)
{
	return;
}

std::string	HumanA::getName(void)
{
	return (this->name_);
}

Weapon	HumanA::getWeapon(void)
{
	return (this->weapon_);
}

void	HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with their ";
	std::cout << this->getWeapon().getType() << std::endl;
}
