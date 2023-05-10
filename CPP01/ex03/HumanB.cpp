/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:19:55 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/10 18:39:23 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

HumanB::HumanB(std::string name): name_(name), weapon_(NULL)
{
	return;
}

std::string	HumanB::getName(void)
{
	return (this->name_);
}

Weapon	*HumanB::getWeapon(void)
{
	return (this->weapon_);
}

void	HumanB::setName(std::string name)
{
	this->name_ = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon_ =	&weapon;
}

void	HumanB::attack(void)
{
	if (!this->weapon_)
		std::cout << this->getName() << " has no weapon equiped" << std::endl;
	else
	{
		std::cout << this->getName() << " attacks with their ";
		std::cout << this->getWeapon()->getType() << std::endl;
	}
}
