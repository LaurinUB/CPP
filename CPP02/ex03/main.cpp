/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:25:58 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 15:02:33 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {
  Point a = Point(4.2f, 2.1f);
  Point b = Point(1, 1);
  Point c = Point(2, 2);
  Point point1 = Point(1.2f, 1.2f);
  Point point2 = Point(7.2f, 7.2f);
  Point point3(a);

  std::cout << "Point a = [ " << a.getX() <<", " << a.getY() <<" ]"<< std::endl;
  std::cout << "Point b = [ " << b.getX() <<", " << b.getY() <<" ]"<< std::endl;
  std::cout << "Point c = [ " << c.getX() <<", " << c.getY() <<" ]"<< std::endl;
  std::cout << std::endl;
  std::cout << "point1 = [ " << point1.getX() << ", " << point1.getY()
    << " ]"<< std::endl;
  if (bsp(a, b, c, point1)) {
    std::cout << "Point1 is inside of the Triangle" << std::endl;
  } else {
    std::cout << "Point1 is outside of the Triangle" << std::endl;
  }
  std::cout << std::endl;
  std::cout << "point2 = [ " << point2.getX() << ", " << point2.getY()
    << " ]"<< std::endl;
  if (bsp(a, b, c, point2)) {
    std::cout << "Point2 is inside of the Triangle" << std::endl;
  } else {
    std::cout << "Point2 is outside of the Triangle" << std::endl;
  }
  std::cout << std::endl;
  std::cout << "point3 = [ " << point3.getX() << ", " << point3.getY()
    << " ]"<< std::endl;
  if (bsp(a, b, c, point3)) {
    std::cout << "Point3 is inside of the Triangle" << std::endl;
  } else {
    std::cout << "Point3 is outside of the Triangle" << std::endl;
  }
  return 0;
}
