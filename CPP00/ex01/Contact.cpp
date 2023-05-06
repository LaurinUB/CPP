/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:13:53 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/06 11:25:03 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <ios>
#include <iomanip>

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string	cut_length(std::string str)
{
	if (str.length() <= 10)
		return (str);
	else
	{
		str = str.substr(0, 9);
		str.push_back('.');
		return (str);
	}
}

void	Contact::show(size_t i)
{
	if (!this->first_name_.empty())
	{
		std::cout << " | ";
		std::cout.width(10);
		std::cout.setf(std::cout.right);
		std::cout << i << " | ";
		std::cout.width(10);
		std::cout.setf(std::cout.right);
		std::cout << cut_length(this->first_name_) << " | ";
		std::cout.width(10);
		std::cout.setf(std::cout.right);
		std::cout << cut_length(this->last_name_) << " | ";
		std::cout.width(10);
		std::cout.setf(std::cout.right);
		std::cout << cut_length(this->nickname_) << " | " << std::endl;
	}
}

void	Contact::set_first_name(std::string arg)
{
	this->first_name_ = arg;
}

void	Contact::set_last_name(std::string arg)
{
	this->last_name_ = arg;
}

void	Contact::set_nickname(std::string arg)
{
	this->nickname_ = arg;
}

void	Contact::set_phone_number(std::string arg)
{
	this->phone_number_ = arg;
}

void	Contact::set_darkest_secret(std::string arg)
{
	this->darkest_secret_ = arg;
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name_);
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name_);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname_);
}

std::string	Contact::get_phone_number(void)
{
	return (this->phone_number_);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret_);
}
