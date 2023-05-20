/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:32:11 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 14:57:30 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

class Fixed {
 public:
  Fixed(void);
  Fixed(const int value);
  Fixed(const float value);
  ~Fixed(void);
  Fixed(const Fixed& fix);
  Fixed& operator = (const Fixed& fix);

  int getRawBits(void) const;
  void  setRawBits(const int raw);
  float toFloat(void) const;
  int toInt(void) const;

 private:
  int fixed_point_number_;
  static const int literal_ = 8;
};

std::ostream & operator << (std::ostream & out, const Fixed & fix);

#endif  // FIXED_HPP_
