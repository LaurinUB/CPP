/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:36:15 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/05 14:47:20 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP_
#define SERIALIZE_HPP_

#include <stdint.h>
#include <iostream>
#include "Data.h"

class Serialize {
 public:
  static uintptr_t serialize(Data* ptr);
  static Data* deserialize(uintptr_t raw);

 private:
  Serialize(void);
  Serialize(const Serialize &rhs);
  ~Serialize(void);
  Serialize& operator=(const Serialize &rhs);
};

#endif  // SERIALIZE_HPP_
