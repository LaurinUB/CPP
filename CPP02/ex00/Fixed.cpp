/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:37:19 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/16 21:05:07 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constuctor called" << std::endl;
	fixed_point_number_ = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destuctor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy constuctor called" << std::endl;
	*this = fix;
}

Fixed & Fixed::operator = (const Fixed & fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->fixed_point_number_ = fix.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number_);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_number_ = raw;
}
