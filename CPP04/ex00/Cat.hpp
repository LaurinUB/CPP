/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:16:42 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 17:16:43 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  Cat(const Cat &rhs);
  ~Cat(void);
  Cat& operator=(const Cat &rhs);

  void  makeSound(void) const;
};

#endif  // CAT_HPP_
