#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <algorithm>

template<class T>
int easyfind(T container, int to_find) {
  typename std::iterator_traits<T>::difference_type iter;
  iter = container.begin();
  while (iter != container.end()) {
    if (container[iter] == to_find) {
      return to_find;
    }
    iter++;
  }
  return container.at(container.end());
}

#endif  // EASYFIND_HPP_
