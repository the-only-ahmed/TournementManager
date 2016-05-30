#include "Coach.hpp"

int   Coach::_count = 0;

Coach::Coach() : APerson("", "", "", 0) {}

Coach::Coach(std::string name, std::string pName, std::string nat, int age,
            CoachGrade grade) : APerson(name, pName, nat, age)
{
    this->myGrade = grade;
    setId();
}

CoachGrade Coach::getGrade() { return this->myGrade; }

void       Coach::setId() { this->id = Coach::_count++; }
void       Coach::setCount(int n) { Coach::_count = n; }
