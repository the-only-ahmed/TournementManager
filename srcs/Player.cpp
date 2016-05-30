#include "Player.hpp"

int			Player::_count = 0;

Player::Player(std::string name, std::string pName, std::string nat, int age,
				PlayerPost post, int num) : APerson(name, pName, nat, age)
{
    this->myPost = post;
    this->myNum = num;
		setId();
}

PlayerPost  Player::getPost() { return this->myPost; }
int         Player::getNumber() { return this->myNum; }
void       	Player::setId() { this->id = Player::_count++; }
void       	Player::setCount(int n) { Player::_count = n; }
