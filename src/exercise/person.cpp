
#include "exercise/person.hpp"

person::person(const std::string &fname, const std::string &lname)
    : firstName_(fname), lastName_(lname) {}

std::string person::firstName() const { return firstName_; }

std::string person::lastName() const { return lastName_; }

std::string person::fullName() const { return firstName_ + " " + lastName_; }
