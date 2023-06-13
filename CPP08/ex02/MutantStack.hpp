/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:16:20 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/13 16:22:22 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <deque>
#include <stack>
#include <iterator>

template< typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
 public:
  MutantStack() : std::stack<T>() {}
  ~MutantStack() {}
  MutantStack(const MutantStack& obj) : std::stack<T>(obj) {}
  MutantStack& operator=(const MutantStack& obj) {
    *this = obj;
  }

  using std::stack< T, Container>::c;
  typedef typename std::deque<T>::iterator iterator;
  iterator begin() {
    return c.begin();
  }
  iterator end() {
    return c.end();
  }
};

#endif  // MUTANTSTACK_HPP_
