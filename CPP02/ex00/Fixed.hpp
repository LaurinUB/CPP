/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:32:11 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/20 14:57:49 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
# define FIXED_HPP_

#include <iostream>

class Fixed {
 public:
  Fixed(void);
  ~Fixed(void);
  Fixed(const Fixed & fix);
  Fixed & operator = (const Fixed & fix);

  int getRawBits(void) const;
  void  setRawBits(const int raw);

 private:
  int fixed_point_number_;
  static const int literal_ = 8;
};

#endif  // FIXED_HPP_
