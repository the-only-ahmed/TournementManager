#include "APerson.hpp"

APerson::APerson(std::string name, std::string preName, std::string nat, int age)
{
    this->name = name;
    this->preName = preName;
    this->nationality = nat;
    this->age = age;
}

std::string APerson::getName() { return this->name; }
std::string APerson::getPreName() { return this->preName; }
std::string APerson::getNat() { return this->nationality; }
int         APerson::getAge() { return this->age; }
