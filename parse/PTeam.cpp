#include "foot_enum.hpp"
#include "TmpBase.hpp"
#include <fstream>

void    parseTeam(std::string fileName) {
  std::ifstream myfile;
  myfile.open ("./database/" + fileName);

  std::string delimiter = ".";
  std::string name = fileName.substr(0, fileName.find(delimiter));

  std::string   line;
  int           pos = 0;
  int           id, coachID, win, los, drw;
  std::list<Player>     titPlayers;
  std::list<Player>     resPlayers;

  while (std::getline (myfile,line))
  {
    switch (++pos) {
      case 1: //id
        id = std::stoi(line);
      break;
      case 2: //coachID
        coachID = std::stoi(line);
      break;
      case 3: //victoires
        win = std::stoi(line);
      break;
      case 4: //defaites
        los = std::stoi(line);
      break;
      case 5: //matches nuls
        drw = std::stoi(line);
      break;
      case 6 ... 16: //id de joueurs titulaires
        titPlayers.push_back(*(TmpBase::getPlayerByID(std::stoi(line))));
      break;
      default: //id de joueurs reservistes
        resPlayers.push_back(*(TmpBase::getPlayerByID(std::stoi(line))));
      break;
    }
  }

  Team t = Team(name, win, los, drw);
  t.setId(id);
  t.setCoach(*(TmpBase::getCoachByID(coachID)));
  t.setTitPlayers(titPlayers);
  t.setResPlayers(resPlayers);

  TmpBase::addTeam(t);
  myfile.close();
}

void 		saveTeams() {
  for (auto &c : TmpBase::getTeams()) {
    std::ofstream myfile;
    myfile.open ("./database/" + c.getName() + ".tem");

    myfile << std::to_string(c.getId()) + "\n";
    myfile << std::to_string(c.getCoach().getId()) + "\n";
    myfile << std::to_string(c.getVictories()) + "\n";
    myfile << std::to_string(c.getLosses()) + "\n";
    myfile << std::to_string(c.getDraws()) + "\n";

    //TODO: add titulaires
    //TODO: add reserve

    myfile.close();
  }
}
