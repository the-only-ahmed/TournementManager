#include "TmpBase.hpp"

/*  INIT STATICS  */
std::list<Competition>   TmpBase::_compet;
std::list<Match>         TmpBase::_games;
std::list<Team>          TmpBase::_teams;
std::list<Player>        TmpBase::_players;
std::list<Coach>         TmpBase::_coachs;
std::list<Referee>        TmpBase::_Referees;

/*  ADD METHODES  */
void TmpBase::addCompet(Competition const& c) { TmpBase::_compet.push_back(c); }
void TmpBase::addMatch(Match const& c)  { TmpBase::_games.push_back(c); }
void TmpBase::addTeam(Team const& c)  { TmpBase::_teams.push_back(c); }
void TmpBase::addPlayer(Player const& c)  { TmpBase::_players.push_back(c); }
void TmpBase::addCoach(Coach const& c)  { TmpBase::_coachs.push_back(c); }
void TmpBase::addReferee(Referee const& c)  { TmpBase::_Referees.push_back(c); }

/*  REMOVE METHODES */
void TmpBase::deleteCompet(size_t pos) {
  std::list<Competition>::iterator it = TmpBase::_compet.begin();
  for (size_t i = 0; i < pos; i++)
    it++;
  TmpBase::_compet.erase(it);
}

void TmpBase::deleteMatch(size_t pos) {
  std::list<Match>::iterator it = TmpBase::_games.begin();
  for (size_t i = 0; i < pos; i++)
    it++;
  TmpBase::_games.erase(it);
}

void TmpBase::deleteTeam(size_t pos) {
  std::list<Team>::iterator it = TmpBase::_teams.begin();
  for (size_t i = 0; i < pos; i++)
    it++;
  TmpBase::_teams.erase(it);
}

void TmpBase::deletePlayer(size_t pos) {
  std::list<Player>::iterator it = TmpBase::_players.begin();
  for (size_t i = 0; i < pos; i++)
    it++;
  TmpBase::_players.erase(it);
}

void TmpBase::deleteCoach(size_t pos) {
  std::list<Coach>::iterator it = TmpBase::_coachs.begin();
  for (size_t i = 0; i < pos; i++)
    it++;
  TmpBase::_coachs.erase(it);
}

void TmpBase::deleteReferee(size_t pos) {
  std::list<Referee>::iterator it = TmpBase::_Referees.begin();
  for (size_t i = 0; i < pos; i++)
    it++;
  TmpBase::_Referees.erase(it);
}

/*  EDIT METHODES */
/*void TmpBase::ediCompet(size_t pos);
void TmpBase::ediMatch(size_t pos);
void TmpBase::ediTeam(size_t pos);
void TmpBase::ediPlayer(size_t pos);
void TmpBase::ediCoach(size_t pos);
void TmpBase::ediReferee(size_t pos);*/

/*  SHOW METHODES */
void TmpBase::showCompet(void) {
  for (auto &i : TmpBase::_compet) {
        std::cout << i.getName() << std::endl;
    }
}

void TmpBase::showMatch(void) {
  for (auto &i : TmpBase::_games) {
    std::cout << i.getTeamByNb(0).getName() + " - " + i.getTeamByNb(1).getName() << std::endl;
  }
}

void TmpBase::showTeam(void) {
  for (auto &i : TmpBase::_teams) {
        std::cout << i.getName() << std::endl;
    }
}

void TmpBase::showPlayer(void) {
  for (auto &i : TmpBase::_players) {
        std::cout << i.getName() << std::endl;
    }
}

void TmpBase::showCoach(void) {
  for (auto &i : TmpBase::_coachs) {
        std::cout << i.getName() << std::endl;
    }
}

void TmpBase::showReferee(void) {
  for (auto &i : TmpBase::_Referees) {
        std::cout << i.getName() << std::endl;
    }
}

/*  GET BY ID METHODES */

Competition*   TmpBase::getCompetByID(int id) {
  for (auto &c : TmpBase::_compet) {
    if (id == c.getId())
      return &c;
  }
  return nullptr;
}

Match*         TmpBase::getMatchByID(int id) {
  for (auto &c : TmpBase::_games) {
    if (id == c.getId())
      return &c;
  }
  return nullptr;
}

Team*         TmpBase::getTeamByID(int id) {
  for (auto &c : TmpBase::_teams) {
    if (id == c.getId())
      return &c;
  }
  return nullptr;
}

Player*       TmpBase::getPlayerByID(int id) {
  for (auto &c : TmpBase::_players) {
    if (id == c.getId())
      return &c;
  }
  return nullptr;
}

Coach*        TmpBase::getCoachByID(int id) {
  for (auto &c : TmpBase::_coachs) {
    if (id == c.getId())
      return &c;
  }
  return nullptr;
}

Referee*       TmpBase::getRefereeByID(int id) {
  for (auto &c : TmpBase::_Referees) {
    if (id == c.getId())
      return &c;
  }
  return nullptr;
}

/*  GET METHODES */

std::list<Competition>  TmpBase::getCompets(void) { return TmpBase::_compet; }
std::list<Match>        TmpBase::getMatchs(void) { return TmpBase::_games; }
std::list<Team>         TmpBase::getTeams(void) { return TmpBase::_teams; }
std::list<Player>       TmpBase::getPlayers(void) { return TmpBase::_players; }
std::list<Coach>        TmpBase::getCoachs(void) { return TmpBase::_coachs; }
std::list<Referee>       TmpBase::getReferees(void) { return TmpBase::_Referees; }
