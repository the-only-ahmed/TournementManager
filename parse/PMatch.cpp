#include "foot_enum.hpp"
#include "TmpBase.hpp"
#include <fstream>

void    parseMatch(std::string fileName) {
  std::ifstream myfile;
  myfile.open ("./database/" + fileName);

  std::string delimiter = ".";
  int id = std::stoi(fileName.substr(0, fileName.find(delimiter)));

  std::string   line;
  int           pos = 0;
  int           scoreT1, scoreT2;
  Team          team1, team2;
  Refree        ref;

  while (std::getline (myfile,line))
  {
    switch (++pos) {
      case 1: //id de l'arbitre
        ref = *(TmpBase::getRefreeByID(std::stoi(line)));
      break;
      case 2: //equipe a domicile
        team1 = *(TmpBase::getTeamByID(std::stoi(line)));
      break;
      case 3: //equipe a l'exterieur
        team2 = *(TmpBase::getTeamByID(std::stoi(line)));
      break;
      case 4: //score domicile
        scoreT1 = std::stoi(line);
      break;
      case 5: //score exterieur
        scoreT2 = std::stoi(line);
      break;
    }
  }

  Match m = Match(ref);
  m.setId(id);
  m.setTeams(team1, team2);
  m.setScore(scoreT1, scoreT2);

  TmpBase::addMatch(m);
  myfile.close();
}

void 		saveGames() {
  for (auto &c : TmpBase::getMatchs()) {
    std::ofstream myfile;
    myfile.open ("./database/" + std::to_string(c.getId()) + ".mat");

    myfile << std::to_string(c.getRef().getId()) + "\n";
    myfile << std::to_string(c.getTeamByNb(0).getId()) + "\n";
    myfile << std::to_string(c.getTeamByNb(1).getId()) + "\n";
    myfile << std::to_string(c.getScore(0)) + "\n";
    myfile << std::to_string(c.getScore(1)) + "\n";

    myfile.close();
  }
}
