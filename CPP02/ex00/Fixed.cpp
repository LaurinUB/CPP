/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:37:19 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/14 20:10:25 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	fixed_point_number_ = 0;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed::Fixed(Fixed const & fix)
{
	*this = fix;
}

Fixed & Fixed::operator = (Fixed const & fix)
{
	if (this != &fix)
		this->fixed_point_number_ = fix.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->fixed_point_number_);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point_number_ = raw;
}
