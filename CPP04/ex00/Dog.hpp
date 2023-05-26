/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:16:52 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 17:16:52 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog(void);
  Dog(const Dog &rhs);
  ~Dog(void);
  Dog& operator=(const Dog &rhs);

  void  makeSound(void) const;
};

#endif  // DOG_HPP_
