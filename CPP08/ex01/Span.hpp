/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:02:27 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/12 13:34:46 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <vector>

class Span {
 public:
  Span();
  Span(unsigned int N);
  ~Span();
  Span(const Span& obj);
  Span& operator=(const Span& obj);

  void  addNumber(int nbr);
  int shortestSpan();
  int longestSpan();

  int getNumber(unsigned int index);

 private:
  std::vector<int> container_;
};

#endif  // SPAN_HPP_
