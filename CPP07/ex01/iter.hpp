/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:55:16 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/08 09:06:57 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP_
#define ITER_HPP_

#include <iostream>

template<typename T, typename F>
void  iter(T adress , size_t length, F function) {
  for (size_t i = 0; i < length; ++i) {
    function(adress[i]);
  }
}

#endif  // ITER_HPP_
