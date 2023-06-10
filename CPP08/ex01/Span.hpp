/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:02:27 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/09 19:12:01 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_

class Span {
 public:
  Span();
  ~Span();
  Span(const Span& obj);
  Span& operator=(const Span& obj);

  void  addNumber(int nbr);
  int shortestSpan();
  int longestSpan();

 private:
};

#endif  // SPAN_HPP_
