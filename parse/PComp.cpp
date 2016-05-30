#include "foot_enum.hpp"
#include "TmpBase.hpp"
#include <fstream>

void    parseCompete(std::string fileName) {
  std::ifstream myfile;
  myfile.open ("./database/" + fileName);

  std::string delimiter = ".";
  std::string name = fileName.substr(0, fileName.find(delimiter));

  std::string       line;
  int               pos = 0;
  int               id, nbTour;
  std::list<Match>  games;

  while (std::getline (myfile,line))
  {
    switch (++pos) {
      case 1: //id
        id = std::stoi(line);
      break;
      case 2: //nbTour
        nbTour = std::stoi(line);
      break;
      default: //games
        games.push_back(*TmpBase::getMatchByID(std::stoi(line)));
      break;
    }
  }

  Competition c = Competition(name, nbTour);
  c.setId(id);
  c.setGames(games);

  TmpBase::addCompet(c);
  myfile.close();
}

void 		saveCompetitions() {
  for (auto &c : TmpBase::getCompets()) {
    std::ofstream myfile;
    myfile.open ("./database/" + c.getName() + ".comp");

    myfile << std::to_string(c.getId()) + "\n";
    myfile << std::to_string(c.getNbTour()) + "\n";

    //TODO: ADD GAMES

    myfile.close();
  }
}
