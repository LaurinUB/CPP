#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
#include <string>

class Brain {
 public:
  Brain(void);
  Brain(const Brain &rhs);
  ~Brain(void);
  Brain& operator=(const Brain &rhs);

  std::string ideas[100];
};

#endif  // BRAIN_HPP_
