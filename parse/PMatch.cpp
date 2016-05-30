#include "foot_enum.hpp"
#include "TmpBase.hpp"
#include <fstream>

void    parseMatch(std::string fileName) {
  std::ifstream myfile;
  myfile.open ("./database/" + fileName);

  /*std::string delimiter = ".";
  int id = std::stoi(fileName.substr(0, fileName.find(delimiter)));

  std::string   line;
  int           pos = 0;
  int           refId, team1Id, team2Id, scoreT1, scoreT2;

  while (std::getline (myfile,line))
  {
    switch (pos++) {
      case 1: //id
        refId = std::stoi(line);
      break;
      case 2: //nbTour
        team1Id = std::stoi(line);
      break;
      case 3: //nbTour
        team2Id = std::stoi(line);
      break;
      case 4: //nbTour
        scoreT1 = std::stoi(line);
      break;
      case 5: //nbTour
        scoreT2 = std::stoi(line);
      break;
    }
    std::cout << line << '\n';
  }*/

  //Match m = Match(name, nbTour);
  //c.setId(id);

  //TmpBase::addCompet(c);
  myfile.close();
}
