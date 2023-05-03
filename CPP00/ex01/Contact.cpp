/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:13:53 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/03 09:19:56 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::set_first_name(std::string arg)
{
	this->_first_name = arg;
}

void	Contact::set_last_name(std::string arg)
{
	this->_last_name = arg;
}

void	Contact::set_nickname(std::string arg)
{
	this->_nickname = arg;
}

void	Contact::set_phone_number(std::string arg)
{
	this->_phone_number = arg;
}

void	Contact::set_darkest_secret(std::string arg)
{
	this->_darkest_secret = arg;
}

std::string	Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}
