/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:37:29 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/06 13:50:05 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(void)
{
	return;
}

Account::Account(int initial_deposit)
{
	this->_totalAmount = initial_deposit;
	return;
}

Account::~Account(void)
{
	return;
}

void	displayAcountsInfos(void)
{

}
