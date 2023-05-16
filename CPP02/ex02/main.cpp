/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:25:58 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/16 22:31:47 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed e;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	e = Fixed(10);

	std::cout << RED "a " WHITE << "= " << a << std::endl;
	std::cout << GREEN "b " WHITE << "= " << b << std::endl;
	std::cout << CYAN "c " WHITE << "= " << c << std::endl;
	std::cout << PURPLE "d " WHITE << "= " << d << std::endl;
	std::cout << YELLOW "e " WHITE << "= " << e << std::endl << std::endl;
	
	std::cout << RED "a" WHITE << " + " << GREEN "b" WHITE << " : " << a + b << std::endl;
	std::cout << RED "a" WHITE <<  " - " << GREEN "b" WHITE << " : " << a - b << std::endl;
	std::cout << YELLOW "e" WHITE << " * " << CYAN "c" WHITE << " : " << e * c << std::endl;
	std::cout << YELLOW "e" WHITE << " / " << CYAN "c" WHITE << " : " << e / c << std::endl;
	std::cout << YELLOW "e" WHITE  << " == " << CYAN "c" WHITE << " : " << (e == c) << std::endl;
	std::cout << YELLOW "e" WHITE  << " == " << GREEN "b" WHITE << " : " << (e == b) << std::endl;
	std::cout << YELLOW "e" WHITE  << " != " << CYAN "c" WHITE << " : " << (e != c) << std::endl;
	std::cout << YELLOW "e" WHITE  << " != " << GREEN "b" WHITE << " : " << (e != b) << std::endl;
	std::cout << RED "a" WHITE <<  " >= " << CYAN "c" WHITE << " : "<< (a >= c) << std::endl;
	std::cout << RED "a" WHITE <<  " <= " << CYAN "c" WHITE << " : "<< (a <= c) << std::endl;
	std::cout << RED "a" WHITE << " < " << CYAN "c" WHITE << " : " << (a < c) << std::endl;
	std::cout << RED "a" WHITE << " > " << CYAN "c" WHITE << " : " << (a > c) << std::endl;
	std::cout << "min between " << GREEN "b" WHITE << " and " << CYAN "c" WHITE << " : " << Fixed::min(b, c) << std::endl;
	std::cout << "max between " << GREEN "b" WHITE << " and " << CYAN "c" WHITE << " : " << Fixed::max(b, c) << std::endl;
	std::cout << "before operation = " << e << ", e++ = " << e++ << ", after operation = " << e <<std::endl;
	std::cout << "before operation = " << e << ", ++e = " << ++e << ", after operation = " << e <<std::endl;
	std::cout << "before operation = " << e << ", e-- = " << e-- << ", after operation = " << e <<std::endl;
	std::cout << "before operation = " << e << ", --e = " << --e << ", after operation = " << e <<std::endl;
	return 0;
}
