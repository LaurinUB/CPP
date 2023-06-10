/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:02:25 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/09 19:06:55 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(const Span& obj) {
*this = obj;
}

Span& Span::operator=(const Span& obj) {
  if (this != &obj) {
    *this = obj;
  }
  return *this;
}
