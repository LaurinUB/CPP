/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:53:59 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/08 11:22:57 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome {
 public:
  Awesome(void) : n_(42) { return; }
  int get(void) const { return this->n_; }
  void set(const int t) { this->n_ = t; }
  int operator*(const Awesome rhs);
  Awesome operator=(const int i);
 private:
  int n_;
};

std::ostream& operator<<(std::ostream& o, const Awesome& rhs) {
  o << rhs.get();
  return o;
}

int Awesome::operator*(const Awesome rhs) {
  return this->get() * rhs.get();
}

Awesome Awesome::operator=(const int i) {
  this->set(i);
  return *this;
}

template<typename T>
void  print(T& x) {
  std::cout << x << std::endl;
  return;
}

template<typename T>
void  powVal(T& a) {
  a = a * a;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  std::cout << "int array" << std::endl;
  iter(tab, 5, print<int>);
  std::cout << "powVal values" << std::endl;
  iter(tab, 5, powVal<int>);
  iter(tab, 5, print<int>);
  std::cout << std::endl << "Awesome class" << std::endl;
  iter(tab2, 5, print<Awesome>);
  std::cout << "powVal values" << std::endl;
  iter(tab2, 5, powVal<Awesome>);
  iter(tab2, 5, print<Awesome>);

  return 0;
}
