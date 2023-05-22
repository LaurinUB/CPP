/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:48:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 10:45:56 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  const WrongAnimal* m = new WrongAnimal();
  const WrongAnimal* c = new WrongCat();

  std::cout << i->getType() << " " << std::endl;
  i->makeSound();  // will output the cat sound!
  std::cout << j->getType() << " " << std::endl;
  j->makeSound();
  std::cout << meta->getType() << " " << std::endl;
  meta->makeSound();
  std::cout << m->getType() << " " << std::endl;
  m->makeSound();
  std::cout << c->getType() << " " << std::endl;
  c->makeSound();
  return 0;
}
