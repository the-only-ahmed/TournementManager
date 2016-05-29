#include "Team.hpp"

Team::Team() {}
Team&	Team::operator=(Team const& src) {
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

std::list<Player>   Team::getTitPlayers() const { return this->myTitPlayers; }
std::list<Player>   Team::getResPlayers() const { return this->myResPlayers; }
Coach               Team::getCoach() const { return this->myCoach; }
int                 Team::getVictories() const { return this->victories; }
int                 Team::getLosses() const { return this->losses; }
int                 Team::getDraws() const { return this->draws; }
