#include "APerson.hpp"

APerson::APerson(std::string name, std::string preName, std::string nat, int age)
{
    this->name = name;
    this->preName = preName;
    this->nationality = nat;
    this->age = age;
}

void        APerson::setName(std::string name) { this->name = name; }
void        APerson::setPreName(std::string preName) { this->preName = preName; }
void        APerson::setNationality(std::string nationality) { this->nationality = nationality; }
void        APerson::setAge(int age) { this->age = age; }

std::string APerson::getName() { return this->name; }
std::string APerson::getPreName() { return this->preName; }
std::string APerson::getNat() { return this->nationality; }
int         APerson::getAge() { return this->age; }
