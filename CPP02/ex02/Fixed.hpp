/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:32:11 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 14:57:11 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP_
#define FIXED_HPP_

#define WHITE   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"
#define PURPLE  "\033[35m"

#include <iostream>

class Fixed {
 public:
  Fixed(void);
  Fixed(const int value);
  Fixed(const float value);
  ~Fixed(void);
  Fixed(Fixed const& fix);

  int getRawBits(void) const;
  void  setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

  Fixed&  operator = (const Fixed& fix);
  bool  operator > (const Fixed& fix) const;
  bool  operator < (const Fixed& fix) const;
  bool  operator >= (const Fixed& fix) const;
  bool  operator <= (const Fixed& fix) const;
  bool  operator == (const Fixed& fix) const;
  bool  operator != (const Fixed& fix) const;
  Fixed operator + (const Fixed& add) const;
  Fixed operator - (const Fixed& sub) const;
  Fixed operator * (const Fixed& mult) const;
  Fixed operator / (const Fixed& div) const;
  Fixed&  operator++ (void);
  Fixed operator++ (int);
  Fixed&  operator-- (void);
  Fixed operator-- (int);

  static  Fixed& min(Fixed& first, Fixed& second);
  static  const Fixed& min(const Fixed& first, const Fixed& second);
  static  Fixed& max(Fixed &first, Fixed& second);
  static  const Fixed& max(const Fixed& first, const Fixed& second);

 private:
  int fixed_point_number_;
  static const int literal_ = 8;
};

std::ostream& operator << (std::ostream& out, const Fixed& fix);

#endif  // FIXED_HPP_
