/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:26:17 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/23 17:59:31 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP_
#define ICE_HPP_

#include <iostream>
#include "../include/AMateria.hpp"

class Ice : public AMateria {
 public:
  Ice(void);
  Ice(const Ice &rhs);
  ~Ice(void);
  Ice& operator=(const Ice &rhs);

  AMateria* clone(void) const;
  void  use(ICharacter& target);
};

#endif  // ICE_HPP_
