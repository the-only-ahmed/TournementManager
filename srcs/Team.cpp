#include "Team.hpp"

int	Team::_count = 0;

Team::Team() {}

Team::Team(std::string name, int win, int los, int drw) {
	this->name = name;
	this->id = Team::_count++;
	this->victories = win;
	this->losses = los;
	this->draws = drw;
}

/*Team&	Team::operator=(Team const& src) {
	this->name = src.getName();
	this->myTitPlayers = src.getTitPlayers();
	this->myResPlayers = src.getResPlayers();
	this->myCoach = src.getCoach();
	this->victories = src.getVictories();
	this->losses = src.getLosses();
	this->draws = src.getDraws();
	return *this;
}*/

bool	Team::operator==(Team const& rhs) const {
	if (*this == rhs)
		return true;
	return false;
}

std::string					Team::getName() const { return this->name; }
std::list<Player>   Team::getTitPlayers() const { return this->myTitPlayers; }
std::list<Player>   Team::getResPlayers() const { return this->myResPlayers; }
Coach               Team::getCoach() const { return this->myCoach; }
int                 Team::getVictories() const { return this->victories; }
int                 Team::getLosses() const { return this->losses; }
int                 Team::getDraws() const { return this->draws; }
int									Team::getId() const { return this->id; }

void       					Team::setCount(int n) { Team::_count = n; }
void       					Team::setId(int n) { this->id = n; }

void 								Team::setTitPlayers(std::list<Player> const& titulaires) {
	this->myTitPlayers = titulaires;
}

void 								Team::setResPlayers(std::list<Player> & reserve) {
	this->myResPlayers = reserve;
}

void 								Team::setCoach(Coach const& c) { this->myCoach = c; }

void 								Team::addPlayer(Player const& pl) {
	this->myResPlayers.push_back(pl);
}
