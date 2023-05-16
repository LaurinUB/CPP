/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:37:19 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/16 22:00:37 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	// std::cout << "Default constuctor called" << std::endl;
	fixed_point_number_ = 0;
}

Fixed::Fixed(const int value) : fixed_point_number_(value << literal_)
{
	// std::cout << "Int constuctor called" << std::endl;
}

Fixed::Fixed(const float value) : fixed_point_number_(roundf(value * (1 << literal_)))
{
	// std::cout << "Int constuctor called" << std::endl;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destuctor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed & fix)
{
	// std::cout << "Copy constuctor called" << std::endl;
	*this = fix;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point_number_;
}

void	Fixed::setRawBits(const int raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_number_ = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed_point_number_) / (1 << literal_));
}

int	Fixed::toInt(void) const
{
	return (this->fixed_point_number_ >> 8);
}

std::ostream & operator << (std::ostream & out, const Fixed & fix)
{
	out << fix.toFloat(); return out;
}

Fixed & Fixed::operator = (const Fixed & fix)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->fixed_point_number_ = fix.getRawBits();
	return (*this);
}

bool	Fixed::operator > (const Fixed & fix)
{
	return (this->getRawBits() > fix.getRawBits());
}

bool	Fixed::operator < (const Fixed & fix)
{

	return (this->getRawBits() < fix.getRawBits());
}

bool	Fixed::operator >= (const Fixed & fix)
{
	return (this->getRawBits() >= fix.getRawBits());
}

bool	Fixed::operator <= (const Fixed & fix)
{
	return (this->getRawBits() <= fix.getRawBits());
}

bool	Fixed::operator == (const Fixed & fix)
{
	return (this->getRawBits() == fix.getRawBits());
}

bool	Fixed::operator != (const Fixed & fix)
{
	return (this->getRawBits() != fix.getRawBits());
}

Fixed 	Fixed::operator + (const Fixed & add)
{
	return (this->toFloat() + add.toFloat());
}

Fixed	Fixed::operator - (const Fixed & sub)
{
	return (this->toFloat() - sub.toFloat());
}

Fixed	Fixed::operator * (const Fixed & mult)
{
	return (this->toFloat() * mult.toFloat());
}

Fixed	Fixed::operator / (const Fixed & div)
{
	return (this->toFloat() / div.toFloat());
}

Fixed 	Fixed::operator ++ (int)
{
	Fixed tmp = *this;

	++this->fixed_point_number_;
	return tmp;
}

Fixed &	Fixed::operator ++ (void)
{
	this->fixed_point_number_++;
	return *this;
}

Fixed	Fixed::operator -- (int)
{
	Fixed tmp = *this;

	--this->fixed_point_number_;
	return tmp;
}

Fixed &	Fixed::operator -- (void)
{
	this->fixed_point_number_--;
	return *this;
}

Fixed &	Fixed::min(Fixed & first, Fixed & second)
{
	if (first.getRawBits() < second.getRawBits())
		return first;
	return second;
}

const Fixed &	Fixed::min(const Fixed & first, const Fixed & second)
{
	if (first.getRawBits() < second.getRawBits())
		return first;
	return second;
}


Fixed &	Fixed::max(Fixed & first, Fixed & second)
{
	if (first.getRawBits() < second.getRawBits())
		return second;
	return first;
}

const Fixed &	Fixed::max(const Fixed & first, const Fixed & second)
{
	if (first.getRawBits() < second.getRawBits())
		return second;
	return first;
}
