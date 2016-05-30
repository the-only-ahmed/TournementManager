#include "foot_enum.hpp"
#include "TmpBase.hpp"
#include <fstream>

void    parseCoach(std::string fileName) {
  std::ifstream myfile;
  myfile.open ("./database/" + fileName);

  std::string delimiter = ".";
  std::string name = fileName.substr(0, fileName.find(delimiter));

  std::string   line, preName, nat;
  int           pos = 0;
  int           id, age;
  CoachGrade    grade;

  while (std::getline (myfile,line))
  {
    switch (++pos) {
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
      case 5: //grade de l'entraineur
        grade = static_cast<CoachGrade>(std::stoi(line));
      break;
    }
  }

  Coach c = Coach(name, preName, nat, age, grade);
  c.setId(id);

  TmpBase::addCoach(c);
  myfile.close();
}

void 		saveCoachs() {
  for (auto &c : TmpBase::getCoachs()) {
    std::ofstream myfile;
    myfile.open ("./database/" + c.getName() + ".coc");

    myfile << std::to_string(c.getId()) + "\n";
    myfile << c.getPreName() + "\n";
    myfile << c.getNat() + "\n";
    myfile << std::to_string(c.getAge()) + "\n";
    myfile << std::to_string(static_cast<int>(c.getGrade())) + "\n";

    myfile.close();
  }
}
