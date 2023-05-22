/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:27 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/22 17:18:27 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat(void);
  WrongCat(const WrongCat &rhs);
  ~WrongCat(void);
  WrongCat& operator=(const WrongCat &rhs);

  void  makeSound(void) const;
};

#endif  // WRONGCAT_HPP_
