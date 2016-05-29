#include "Team.hpp"

int	Team::nb = 0;

Team::Team() {}

Team::Team(std::string name) {
	this->name = name;
	this->id = Team::nb++;
}

Team&	Team::operator=(Team const& src) {
	this->name = src.getName();
	this->myTitPlayers = src.getTitPlayers();
	this->myResPlayers = src.getResPlayers();
	this->myCoach = src.getCoach();
	this->victories = src.getVictories();
	this->losses = src.getLosses();
	this->draws = src.getDraws();
	return *this;
}

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
