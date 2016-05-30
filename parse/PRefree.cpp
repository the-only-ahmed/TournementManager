#include "foot_enum.hpp"
#include "TmpBase.hpp"
#include <fstream>

void    parseRefree(std::string fileName) {
  std::ifstream myfile;
  myfile.open ("./database/" + fileName);

  std::string delimiter = ".";
  std::string name = fileName.substr(0, fileName.find(delimiter));

  std::string   line, preName, nat;
  int           pos = 0;
  int           id, age;
  RefClas       clas;
  RefPost       post;

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
      case 5: //classe d'arbitre
        clas = static_cast<RefClas>(std::stoi(line));
      break;
      case 6: //poste d'arbitre
        post = static_cast<RefPost>(std::stoi(line));
      break;
    }
    std::cout << line << '\n';
  }

  Refree ref = Refree(name, preName, nat, age, clas, post);
  ref.setId(id);

  TmpBase::addRefree(ref);
  myfile.close();
}
