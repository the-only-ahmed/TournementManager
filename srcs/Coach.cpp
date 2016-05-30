#include "Coach.hpp"

int   Coach::_count = 0;

Coach::Coach() : APerson("", "", "", 0) {}

Coach::Coach(std::string name, std::string pName, std::string nat, int age,
            CoachGrade grade) : APerson(name, pName, nat, age)
{
    this->myGrade = grade;
    setId(Coach::_count++);
}

CoachGrade Coach::getGrade() { return this->myGrade; }

void       Coach::setId(int n) { this->id = n; }
void       Coach::setCount(int n) { Coach::_count = n; }
