/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:55:52 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/17 13:41:12 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x_(0), y_(0) {
	return;
}

Point::~Point(void) {
	return;
}

Point::Point(const float x, const float y): x_(x), y_(y) {
	return;
}

Point::Point(const Point& pt) {
	*this = pt;
}

Point& Point::operator = (const Point& pt) {
	static_cast<void>(pt);
	return (*this);
}

const Fixed Point::getX(void) const{
	return this->x_;
}

const Fixed Point::getY(void) const{
	return this->y_;
}
