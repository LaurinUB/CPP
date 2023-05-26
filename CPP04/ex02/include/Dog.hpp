/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:38 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 17:18:39 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 public:
  Dog(void);
  Dog(const Dog &rhs);
  ~Dog(void);
  Dog& operator=(const Dog &rhs);

  void  makeSound(void) const;
  Brain*  getBrain(void);

 private:
  Brain* brain_;
};

#endif  // DOG_HPP_
