//
// Created by laht on 01/09/2022.
//

#ifndef EXERCISE1_PERSON_HPP
#define EXERCISE1_PERSON_HPP

#include <string>

class person {

public:
  person(const std::string &fname, const std::string &lname)
      : firstName_(fname), lastName_(lname) {}

  std::string firstName() const { return firstName_; }

  std::string lastName() const { return lastName_; }

  std::string fullName() const { return firstName_ + " " + lastName_; }

private:
  std::string firstName_;
  std::string lastName_;
};

#endif // EXERCISE1_PERSON_HPP
