/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:13:53 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/01 10:48:16 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Contact Destructor called" << std::endl;
	return;
}
