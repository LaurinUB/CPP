/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:43:56 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:03:12 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP_
#define POINT_HPP_

#include "Fixed.hpp"

class Point {
 public:
  Point(void);
  ~Point(void);
  Point(const float x, const float y);
  Point(const Point& pt);

  Point& operator = (const Point& pt);

  const Fixed getX(void) const;
  const Fixed getY(void) const;

 private:
  const Fixed x_;
  const Fixed y_;
};

bool  bsp(const Point a, const Point b, const Point c, const Point point);

#endif
