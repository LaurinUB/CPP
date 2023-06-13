/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:02:27 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/13 13:04:11 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <cstdlib>
#include <ctime>
#include <vector>

class Span {
 public:
  Span();
  Span(unsigned int N);
  ~Span();
  Span(const Span& obj);
  Span& operator=(const Span& obj);

  void  addNumber(int nbr);
  void  addManyNumbers();
  int shortestSpan();
  int longestSpan();

  int getNumber(unsigned int index);
  int getSize();

  class EmptyException : public std::exception {
    const char* what() const throw();
  };

  class OnlyOneElementException : public std::exception {
    const char* what() const throw();
  };

 private:
  unsigned int  size_;
  std::vector<int> container_;
};

std::ostream& operator<<(std::ostream &o, Span& s);

#endif  // SPAN_HPP_
