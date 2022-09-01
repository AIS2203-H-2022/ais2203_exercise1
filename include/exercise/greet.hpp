//
// Created by laht on 01/09/2022.
//

#ifndef EXERCISE1_GREET_HPP
#define EXERCISE1_GREET_HPP

#include <iostream>

#include "person.hpp"

void greet(const person &p) {
  std::cout << "Hello, " << p.fullName() << "!" << std::endl;
}

#endif // EXERCISE1_GREET_HPP
