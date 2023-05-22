/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:48:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 15:09:12 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

int main(void) {
  Animal *animals[10];

  for (int i = 0; i < 5; ++i) {
    animals[i] = new Dog();
  }
  for (int j = 5; j < 10; ++j) {
    animals[j] = new Cat();
  }
  for (int k = 0; k < 10; ++k) {
    std::cout << GREEN << animals[k]->getType() << WHITE << std::endl;
    animals[k]->makeSound();
  }
  for (int i = 0; i < 10; ++i) {
    delete animals[i];
  }
  return 0;
}
