/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:13:41 by luntiet-          #+#    #+#             */
/*   Updated: 2023/05/23 21:21:08 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP_
#define IMATERIASOURCE_HPP_

#include <iostream>
#include <string>

class AMateria;

class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(const std::string& type) = 0;

 protected:
  AMateria *source_[4];
};

#endif  // IMATERIASOURCE_HPP_
