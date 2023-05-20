/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:07:45 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:00:52 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool  bsp(const Point a, const Point b, const Point c, const Point point) {
  Fixed s = (a.getX() - c.getX())
    * (point.getY() - c.getY())
    - (a.getY() - c.getY())
    * (point.getX() - c.getX());
  Fixed t = (b.getX() - a.getX())
    * (point.getY() - a.getY())
    - (b.getY() - a.getY())
    * (point.getX() - a.getX());
  if ((s < 0) != (t < 0) && s != 0 && t != 0) {
    return (false);
  }
  Fixed d = (c.getX() - b.getX())
      * (point.getY() - b.getY())
      - (c.getY() - b.getY())
      * (point.getX() - b.getX());

  return (d == 0 || (d < 0) == (s + t <= 0));
}
