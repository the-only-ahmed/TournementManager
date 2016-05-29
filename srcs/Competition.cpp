#include "Competition.hpp"

int   Competition::_count = 0;

Competition::Competition(std::string name, int tourNb) : _name(name), _nbTour(tourNb) {
  this->_id = Competition::_count++;
}

void                  Competition::setName(std::string const name) { this->_name = name; }

std::string           Competition::getName() const { return this->_name; }
int                   Competition::getId() const { return this->_id; }
int                   Competition::getNbTour() const { return this->_nbTour; }
std::list<Match>      Competition::getGames() const { return this->_games; }
