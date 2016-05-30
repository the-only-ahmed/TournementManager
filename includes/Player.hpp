#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "APerson.hpp"
#include "foot_enum.hpp"

class Player : public APerson
{
    private:
        PlayerPost  myPost;
        int         myNum;
        static int  _count;

    public:
        Player();
        Player(std::string name, std::string pName, std::string nat, int age,
				PlayerPost post, int num);
        PlayerPost  getPost();
        int         getNumber();
        void        setId(int n);
        void        setCount(int n);
};

#endif
