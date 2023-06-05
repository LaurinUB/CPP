/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:37:40 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/05 14:52:31 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include "Data.h"

int main(void) {
  Data* data = new Data;
  data->value = "lol";
  uintptr_t serial;

  std::cout << "print out staring adress and Data value" << std::endl;
  std::cout << data << std::endl;
  std::cout << data->value << std::endl << std::endl;
  std::cout << "serialize and print out uintptr_t value" << std::endl;
  serial = Serialize::serialize(data);
  std::cout << serial << std::endl << std::endl;
  std::cout << "deserialize and print out Data address and value" << std::endl;
  data = Serialize::deserialize(serial);
  std::cout << data << std::endl;
  std::cout << data->value << std::endl;
  delete data;
}
