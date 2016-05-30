#include "foot_enum.hpp"
#include "TmpBase.hpp"
#include <fstream>

void    parseCount(std::string fileName) {
  std::string   line;
  int           pos = 0;
  std::ifstream myfile;
  myfile.open ("./database/" + fileName);

  while (std::getline (myfile,line))
  {
    switch (pos++) {
      case 1:
        Competition::setCount(std::stoi(line));
      break;
      case 2:
        Match::setCount(std::stoi(line));
      break;
      case 3:
        Team::setCount(std::stoi(line));
      break;
      case 4:
        Player::setCount(std::stoi(line));
      break;
      case 5:
        Coach::setCount(std::stoi(line));
      break;
      case 6:
        Refree::setCount(std::stoi(line));
      break;
    }
  }
  myfile.close();
}
