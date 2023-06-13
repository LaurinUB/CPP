/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:13:19 by luntiet-          #+#    #+#             */
/*   Updated: 2023/06/13 16:23:36 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main() {
  {
    MutantStack<int> st;
    st.push(2);
    st.push(5);
    st.push(3);
    st.push(7);
    st.push(9);

    MutantStack<int> st2 = st;
    st2.pop();
    st2.pop();

    std::cout << "print out st" << std::endl;
    {
      MutantStack<int>::iterator it = st.begin();
      while (it != st.end()) {
        std::cout << *it << std::endl;
        it++;
      }
    }

    std::cout << "print out st st2" << std::endl;
    {
      MutantStack<int>::iterator it = st2.begin();
      while (it != st2.end()) {
        std::cout << *it << std::endl;
        it++;
      }
    }
    std::cout << "st2.empty(): ";
    std::cout << st2.empty() << std::endl;
    st2.pop();
    st2.pop();
    st2.pop();
    std::cout << "st2.empty() after pop() every element: ";
    std::cout << st2.empty() << std::endl << std::endl;

    // MutantStack<int> st3;
    // st3.push(3);
    // st3.push(3);
    // st3.push(3);
    // st3.push(3);
    // st2.swap(st3);
    // std::cout << "print out st st2 after swap with st3" << std::endl;
    // {
    //   MutantStack<int>::iterator it = st2.begin();
    //   while (it != st2.end()) {
    //     std::cout << *it << std::endl;
    //     it++;
    //   }
    // }
  }
  {
    std::cout << "Test from the Subject:" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "printing .top(): ";
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << std::endl << "printing .size(): ";
    std::cout << mstack.size() << std::endl;
    std::cout << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Printing stack:" << std::endl;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
    std::stack<int> s(mstack);
  }
  return 0;
}
