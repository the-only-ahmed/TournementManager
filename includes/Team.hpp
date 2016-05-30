#ifndef TEAM_HPP
#define TEAM_HPP

#include <list>
#include "Player.hpp"
#include "Coach.hpp"

class Team
{
    private:
        std::string         name;
        std::list<Player>   myTitPlayers;
        std::list<Player>   myResPlayers;
        Coach               myCoach;
        int                 victories;
        int                 losses;
        int                 draws;
        int                 id;
        static int          _count;

    public:
      Team();
      Team(std::string name);
	Team&	operator=(Team const& src);

	bool	operator==(Team const& rhs) const;

  std::string         getName() const;
	std::list<Player>   getTitPlayers() const;
	std::list<Player>   getResPlayers() const;
        Coach               getCoach() const;
        int                 getVictories() const;
        int                 getLosses() const;
        int                 getDraws() const;
        int                 getId() const;

        void          setCount(int n);
};

#endif
