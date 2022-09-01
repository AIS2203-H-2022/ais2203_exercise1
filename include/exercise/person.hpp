//
// Created by laht on 01/09/2022.
//

#ifndef EXERCISE1_PERSON_HPP
#define EXERCISE1_PERSON_HPP

#include <string>

class person {

public:
  person(const std::string &fname, const std::string &lname);

  std::string firstName() const;

  std::string lastName() const;

  std::string fullName() const;

private:
  std::string firstName_;
  std::string lastName_;
};

#endif // EXERCISE1_PERSON_HPP
