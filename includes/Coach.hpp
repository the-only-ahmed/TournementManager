#ifndef COACH_HPP
#define COACH_HPP

#include "APerson.hpp"
#include "foot_enum.hpp"

class Coach : public APerson
{
    private:
        CoachGrade  myGrade;
        static int  _count;

    public:
        Coach();
        Coach(std::string name, std::string pName, std::string nat, int age,
				CoachGrade grade);

        CoachGrade getGrade();
        void       setId();
        void       setCount(int n);
};

#endif
