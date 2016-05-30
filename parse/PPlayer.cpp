#include "foot_enum.hpp"
#include "TmpBase.hpp"
#include <fstream>

void    parsePlayer(std::string fileName) {
  std::ifstream myfile;
  myfile.open ("./database/" + fileName);

  std::string delimiter = ".";
  std::string name = fileName.substr(0, fileName.find(delimiter));

  std::string   line, preName, nat;
  int           pos = 0;
  int           id, age, number;
  PlayerPost    post;

  while (std::getline (myfile,line))
  {
    switch (pos++) {
      case 1: //id
        id = std::stoi(line);
      break;
      case 2: //prenom
        preName = line;
      break;
      case 3: //nationalite
        nat = line;
      break;
      case 4: //age
        age = std::stoi(line);
      break;
      case 5: //numero du joueur
        number = std::stoi(line);
      break;
      case 6: //poste du joueur
        post = static_cast<PlayerPost>(std::stoi(line));
      break;
    }
    std::cout << line << '\n';
  }

  Player pl = Player(name, preName, nat, age, post, number);
  pl.setId(id);

  TmpBase::addPlayer(pl);
  myfile.close();
}
