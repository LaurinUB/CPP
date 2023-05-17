/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:07:45 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/17 11:30:21 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool		bsp(const Point a, const Point b, const Point c, const Point point) {
	float	s;
	float	t;
	float	d;

	s = (a.getX().toFloat() - c.getX().toFloat())
			* (point.getY().toFloat() - c.getY().toFloat())
			- (a.getY().toFloat() - c.getY().toFloat())
			* (point.getX().toFloat() - c.getX().toFloat());
	t = (b.getX().toFloat() - a.getX().toFloat())
			* (point.getY().toFloat() - a.getY().toFloat())
			- (b.getY().toFloat() - a.getY().toFloat())
			* (point.getX().toFloat() - a.getX().toFloat());
	if ((s < 0) != (t < 0) && s != 0 && t != 0) {
		return (false);
	}
	d = (c.getX().toFloat() - b.getX().toFloat())
			* (point.getY().toFloat() - b.getY().toFloat())
			- (c.getY().toFloat() - b.getY().toFloat())
			* (point.getX().toFloat() - b.getX().toFloat());

	return (d == 0 | (d < 0) == (s + t <= 0));
}
