#ifndef APERSON_HPP
#define APERSON_HPP

#include <string>

class APerson
{
    protected:
        std::string name;
        std::string preName;
        std::string nationality;
        int         age;

        APerson(std::string name, std::string preName, std::string nat, int age);

    public:
        std::string getName();
        std::string getPreName();
        std::string getNat();
        int         getAge();
};

#endif
