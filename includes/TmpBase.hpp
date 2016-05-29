#ifndef TMPBASE_HPP
#define TMPBASE_HPP

#include "foot_enum.hpp"
#include "Competition.hpp"
#include "Match.hpp"
#include "Team.hpp"
#include "Player.hpp"
#include "Coach.hpp"
#include "Refree.hpp"
#include <list>

class TmpBase
{
  private:
    static std::list<Competition>   _compet;
    static std::list<Match>         _games;
    static std::list<Team>          _teams;
    static std::list<Player>        _players;
    static std::list<Coach>         _coachs;
    static std::list<Refree>        _refrees;

  public:
            /*  ADD METHODES  */
    static void addCompet(Competition const& c);
    static void addMatch(Match const& c);
    static void addTeam(Team const& c);
    static void addPlayer(Player const& c);
    static void addCoach(Coach const& c);
    static void addRefree(Refree const& c);

            /*  REMOVE METHODES */
    static void deleteCompet(size_t pos);
    static void deleteMatch(size_t pos);
    static void deleteTeam(size_t pos);
    static void deletePlayer(size_t pos);
    static void deleteCoach(size_t pos);
    static void deleteRefree(size_t pos);

            /*  EDIT METHODES */
    static void editCompet(size_t pos);
    static void editMatch(size_t pos);
    static void editTeam(size_t pos);
    static void editPlayer(size_t pos);
    static void editCoach(size_t pos);
    static void editRefree(size_t pos);

            /*  SHOW METHODES */
    static void showCompet(void);
    static void showMatch(void);
    static void showTeam(void);
    static void showPlayer(void);
    static void showCoach(void);
    static void showRefree(void);
};

#endif
