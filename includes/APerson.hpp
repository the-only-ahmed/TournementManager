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
        void        setName(std::string const name);
        void        setPreName(std::string const preName);
        void        setNationality(std::string const nationality);
        void        setAge(int const age);

    public:
        std::string getName() const;
        std::string getPreName() const;
        std::string getNat() const;
        int         getAge() const;
};

#endif
