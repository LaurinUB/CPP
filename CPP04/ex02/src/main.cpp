/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:48:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 17:05:47 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

void  print(void) {
  Dog* test = new Dog();
  Dog* test1 = new Dog(*test);
  Dog* test2 = test1;
  Animal *animals[10];

  std::cout << "test brain:\t" << test->getBrain() << std::endl;
  std::cout << "test1 brain:\t" << test1->getBrain() << std::endl;
  std::cout << "test2 brain:\t" << test2->getBrain() << std::endl << std::endl;
  delete test;
  delete test1;

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
}

int main(void) {
  print();
  // system("leaks animal");
  return 0;
}
