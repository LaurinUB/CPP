/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:16:32 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 16:08:36 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal {
 public:
  Animal(void);
  Animal(const Animal &rhs);
  virtual ~Animal(void);
  Animal& operator=(const Animal &rhs);

  std::string getType(void) const;
  virtual void  makeSound(void) const;

 protected:
  std::string type_;
};

#endif  // ANIMAL_HPP_
