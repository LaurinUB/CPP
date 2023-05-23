/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:26:30 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/23 21:13:21 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP_
#define CURE_HPP_

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {
 public:
  Cure(void);
  Cure(const Cure &rhs);
  ~Cure(void);
  Cure& operator=(const Cure &rhs);

  AMateria* clone(void) const;
  void  use(ICharacter& target);
};

#endif  // CURE_HPP_
