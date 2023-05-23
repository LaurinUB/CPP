/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:26:21 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/23 17:57:30 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria {
 public:
  AMateria(void);
  AMateria(const AMateria &rhs);
  virtual ~AMateria(void);
  AMateria& operator=(const AMateria &rhs);
  AMateria(std::string const& type);

  std::string const& getType(void) const;
  virtual AMateria* clone(void) const = 0;
  virtual void use(ICharacter& target);

 protected:
  std::string type_;
};

#endif  // AMATERIA_HPP_
