#include "Coach.hpp"

Coach::Coach(std::string name, std::string pName, std::string nat, int age,
            CoachGrade grade) : APerson(name, pName, nat, age)
{
    this->myGrade = grade;
}

CoachGrade Coach::getGrade() { return this->myGrade; }
