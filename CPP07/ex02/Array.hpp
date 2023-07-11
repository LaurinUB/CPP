/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:59:14 by luntiet-          #+#    #+#             */
/*   Updated: 2023/07/11 16:53:51 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>

template<typename T>
class Array {
 public:
  Array(void): length_(0), data_(new T[0]) {}
  Array(unsigned int n): length_(n), data_(new T[n]) {}
  Array(const Array<T> &rhs)
      : length_(rhs.length_), data_(new T[rhs.length_]) {
    for (unsigned int i = 0; i < rhs.length_; ++i) {
      this->data_[i] = rhs.data_[i];
    }
  }
  ~Array(void) { delete[] data_; }

  Array<T>& operator=(const Array<T> &rhs) {
    if (this != &rhs) {
      delete[] this->data_;
    }
    this->data_ = new T[rhs.length_];
    this->length_ = rhs.length_;
    for (unsigned int i = 0; i < rhs.length_; ++i) {
      this->data_[i] = rhs.data_[i];
    }
    return *this;
  }

  unsigned int  size(void) {
    int count;
    while (this->data_[count]) {
      count++;
    }
    return count;
  }

  T& operator[](unsigned int index) {
    if (index >= this->length_) {
      throw std::exception();
    }
    return this->data_[index];
  }

 private:
  unsigned int  length_;
  T* data_;
};

#endif  // ARRAY_HPP_
