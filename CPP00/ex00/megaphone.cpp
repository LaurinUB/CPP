#include <iostream>

std::string string_toupper(std::string str) {
  unsigned int  i = 0;

  while (i < str.length()) {
    str[i] = std::toupper(str[i]);
    i++;
  }
  return (str);
}

int main(int argc, char **argv) {
  int i;

  i = 1;
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  } else if (argc > 1) {
    while (i < argc) {
      std::cout << string_toupper(argv[i]);	
      i++;
    }
  }
  std::cout << std::endl;

  return (0);
}
