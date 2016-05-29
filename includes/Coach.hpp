#ifndef COACH_HPP
#define COACH_HPP

#include "APerson.hpp"
#include "foot_enum.hpp"

class Coach : public APerson
{
    private:
        CoachGrade  myGrade;

    public:
        Coach(std::string name, std::string pName, std::string nat, int age,
				CoachGrade grade);
        CoachGrade getGrade();
};

#endif
