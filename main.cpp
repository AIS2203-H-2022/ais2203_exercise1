
#include "exercise/greet.hpp"
#include "exercise/person.hpp"

#include <iostream>
#include <vector>

int main() {

  // just showing that there is a bunch of ways of initializing a person (p1-p6)
  person p1{"Nils", "Stokke"};
  person p2("Ola", "Nordmann");

  auto p3 = person("Elon", "Musk");
  const auto p4 = person("Frida", "Jensen");

  person p5 = person("Ola", "Jensen");
  person p6 = {"Kaare", "Conradi"};

  std::vector<person> persons{p1, p2, p3, p4}; // initializer-list
  persons.emplace_back(p5);                    // append one
  persons.push_back(p6);                       // also append one

  for (const auto &person : persons) {
    greet(person);
  }

}
