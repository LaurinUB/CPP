/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:53 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 17:18:54 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  Cat(const Cat &rhs);
  ~Cat(void);
  Cat& operator=(const Cat &rhs);

  void  makeSound(void) const;

 private:
  Brain* brain_;
};

#endif  // CAT_HPP_
