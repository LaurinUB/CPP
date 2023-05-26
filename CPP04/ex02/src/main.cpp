/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:48:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/23 10:06:22 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

void  print(void) {
  Animal* dog = new Dog();
  Animal* cat = new Cat();
  Animal* ccat = new Cat();
  // const Animal* animal = new Animal();
  *ccat = *dog;

  std::cout << dog->getType() << " " << std::endl;
  dog->makeSound();  // will output the cat sound!
  std::cout << cat->getType() << " " << std::endl;
  cat->makeSound();
  std::cout << ccat->getType() << " " << std::endl;
  ccat->makeSound();

  delete dog;
  delete cat;
  delete ccat;
}

int main(void) {
  print();
  // system("leaks animal");
  return 0;
}
