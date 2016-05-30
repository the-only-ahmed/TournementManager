#include "Competition.hpp"

int   Competition::_count = 0;

Competition::Competition(std::string name, int tourNb) : _name(name), _nbTour(tourNb) {
  this->id = Competition::_count++;
}

void                  Competition::setName(std::string const& name) { this->_name = name; }
void                  Competition::setId(int n) { this->id = n; }

std::string           Competition::getName() const { return this->_name; }
int                   Competition::getId() const { return this->id; }
int                   Competition::getNbTour() const { return this->_nbTour; }
std::list<Match>      Competition::getGames() const { return this->_games; }
int                   Competition::getCount() { return Competition::_count; }

void                  Competition::setCount(int n) { Competition::_count = n; }
void                  Competition::setGames(std::list<Match> &games) { this->_games = games; }
