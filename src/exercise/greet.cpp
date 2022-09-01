//
// Created by laht on 01/09/2022.
//

#include <iostream>

#include "exercise/greet.hpp"

void greet(const person &p) {
  std::cout << "Hello, " << p.fullName() << "!" << std::endl;
}
