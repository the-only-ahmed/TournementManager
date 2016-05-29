#include "Player.hpp"

Player::Player(std::string name, std::string pName, std::string nat, int age,
				PlayerPost post, int num) : APerson(name, pName, nat, age)
{
    this->myPost = post;
    this->myNum = num;
}

PlayerPost  Player::getPost() { return this->myPost; }
int         Player::getNumber() { return this->myNum; }
