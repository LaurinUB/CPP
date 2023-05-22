/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:48:51 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 18:20:31 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

void  print(void) {
  const Animal* dog = new Dog();
  const Animal* cat = new Cat();
  // const Animal* animal = new Animal();

  std::cout << dog->getType() << " " << std::endl;
  dog->makeSound();  // will output the cat sound!
  std::cout << cat->getType() << " " << std::endl;
  cat->makeSound();

  delete dog;
  delete cat;
}

int main(void) {
  print();
  // system("leaks animal");
  return 0;
}
