/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:55:29 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 18:19:02 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>

#define WHITE       "\033[0m"
#define GREEN       "\033[32m"

class Animal {
 public:
  Animal(std::string type);
  Animal(const Animal &rhs);
  virtual ~Animal(void);
  Animal& operator=(const Animal &rhs);

  virtual std::string getType(void) const;
  virtual void  makeSound(void) const = 0;

 protected:
  Animal(void);
  std::string type_;
};

#endif  // ANIMAL_HPP_
