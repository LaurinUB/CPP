/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:49:58 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 14:10:55 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter {
 public:
  Character(void);
  Character(const Character &rhs);
  ~Character(void);
  Character& operator=(const Character &rhs);
  Character(const std::string name);

  std::string const & getName() const;
  void  use(int idx, ICharacter &target);
  void  equip(AMateria* m);
  void  unequip(int idx);
  AMateria* getMateria(int idx);

 private:
  std::string name_;
  AMateria* inventory_[4];
};

#endif  // CHARACTER_HPP_
