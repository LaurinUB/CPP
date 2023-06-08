/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:08:19 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/08 08:44:49 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_

template<typename T>
void swap(T& a, T& b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template<typename T>
T min(T a, T b) {
  return (a < b ? a : b);
}

template<typename T>
T max(T a, T b) {
  return (a > b ? a : b);
}

#endif  // WHATEVER_HPP_
