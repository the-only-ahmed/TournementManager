#include "Match.hpp"

/*	EXCEPTIONS	*/

Match::MatchException::MatchException(std::string const& errorMsg) throw()
	: std::runtime_error(errorMsg) { }

const char*	Match::MatchException::what() const throw() {
	std::string ret = "Match exception : " + std::string(std::runtime_error::what());
	return ret.c_str();
}

Match::MatchException::~MatchException() throw() { return; }

/*	MATCH	*/

int		Match::_count = 0;

Match::Match(Referee const& ref) : _ref(ref) {
	this->id = Match::_count++;
}

void	Match::setReferee(Referee const& ref) {
	this->_ref = ref;
}

void	Match::setTeams(Team t1, Team t2) {
	this->_teams[0] = t1;
	this->_teams[1] = t2;
}

void	Match::setScore(int t1, int t2) {
	this->_score[0] = t1;
	this->_score[1] = t2;
}

Referee	Match::getRef() const { return this->_ref; }

Team	Match::getTeamByNb(int nb) const {
	if (nb == 0 || nb == 1)
		return (this->_teams[nb]);
	throw MatchException("Wrong Team Number");
}

int	Match::getScore(Team t) const {
	if (t == this->_teams[0])
		return this->_score[0];
	else if (t == this->_teams[1])
		return this->_score[1];
	else
		throw MatchException("Wrong Team");
}

int	Match::getScore(int nb) const {
	if (nb == 0 || nb == 1)
		return (this->_score[nb]);
	throw MatchException("Wrong Team Number");
}

std::string	Match::getScore() const {
	return std::to_string(this->_score[0]) + " - " + std::to_string(this->_score[1]);
}

int		Match::getId() const { return this->id; }
int   Match::getCount() { return Match::_count; }

void 	Match::setId(int n) { this->id = n; }
void 	Match::setCount(int n) { Match::_count = n; }
