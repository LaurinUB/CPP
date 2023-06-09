#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <algorithm>

template<class T>
int easyfind(const T& container, int to_find) {
  typename T::const_iterator iter;
  iter = std::find(container.begin(), container.end(), to_find);
  if (*iter == to_find) {
    return *iter;
  } else {
    return container.back();
  }
}

#endif  // EASYFIND_HPP_
