#ifndef COMPETITION_HPP
#define COMPETITION_HPP

#include <list>
#include <string>
#include "Match.hpp"

class Competition
{
  private:
    std::list<Match>  _games;
    std::string       _name;
    int               id;
    int               _nbTour;
    static  int       _count;

  public:
    Competition(std::string name, int tourNb);

    void                setName(std::string const& name);
    void                setGames(std::list<Match> &games);

    void                setCount(int n);
    void                setId(int n);

    std::string         getName() const;
    int                 getId() const;
    int                 getNbTour() const;
    std::list<Match>    getGames() const;
};

#endif
