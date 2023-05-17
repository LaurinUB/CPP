/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:25:58 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/17 11:33:55 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point	a = Point(4.2f, 2.1f);
	Point	b = Point(1, 1);	
	Point c = Point(2,2);
	Point point1 = Point (1.2f, 1.2f);
	Point point2 = Point (7.2f, 7.2f);

	// std::cout << a.getX() << std::endl;
	// std::cout << a.getY() << std::endl;
	//
	// std::cout << b.getX() << std::endl;
	// std::cout << b.getY() << std::endl;
	//
	// std::cout << c.getX() << std::endl;
	// std::cout << c.getY() << std::endl;

	if (bsp(a, b, c, point1)) {
		std::cout << "Point is inside of the Triangle" << std::endl;
	} else {
		std::cout << "Point is outside of the Triangle" << std::endl;
	}
	if (bsp(a, b, c, point2)) {
		std::cout << "Point is inside of the Triangle" << std::endl;
	} else {
		std::cout << "Point is outside of the Triangle" << std::endl;
	}
	return 0;
}
