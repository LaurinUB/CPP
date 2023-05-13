/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:28:01 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/13 14:23:59 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

Weapon::Weapon(std::string type): type_(type)
{
	return;
}

const std::string&	Weapon::getType(void)
{
	return (this->type_);
}

void	Weapon::setType(const std::string	type)
{
	this->type_ = type;
}
