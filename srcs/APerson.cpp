#include "APerson.hpp"

APerson::APerson(std::string name, std::string preName, std::string nat, int age)
{
    this->name = name;
    this->preName = preName;
    this->nationality = nat;
    this->age = age;
}

void        APerson::setName(std::string const name) { this->name = name; }
void        APerson::setPreName(std::string const preName) { this->preName = preName; }
void        APerson::setNationality(std::string const nationality) { this->nationality = nationality; }
void        APerson::setAge(int const age) { this->age = age; }

std::string APerson::getName() const { return this->name; }
std::string APerson::getPreName() const { return this->preName; }
std::string APerson::getNat() const { return this->nationality; }
int         APerson::getAge() const { return this->age; }
