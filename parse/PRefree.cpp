#include "foot_enum.hpp"
#include "TmpBase.hpp"
#include <fstream>

void    parseRefree(std::ifstream &myfile, std::string fileName) {
  std::string delimiter = ".";
  std::string name = fileName.substr(0, fileName.find(delimiter));

  std::string   line;
  int           pos = 0;
  int           id, nbTour;

  while (std::getline (myfile,line))
  {
    switch (pos++) {
      case 1: //id
        id = std::stoi(line);
      break;
      case 2: //nbTour
        nbTour = std::stoi(line);
      break;
      default: //games ID
      break;
    }
    std::cout << line << '\n';
  }

  Competition c = Competition(name, nbTour);
  c.setId(id);

  TmpBase::addCompet(c);
}
