/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:17:33 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/24 09:17:34 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
  MateriaSource(void);
  MateriaSource(const MateriaSource &rhs);
  ~MateriaSource(void);
  MateriaSource& operator=(const MateriaSource &rhs);

  void  learnMateria(AMateria* type);
  AMateria*  createMateria(const std::string& type);
};

#endif  // MATERIASOURCE_HPP_
