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
      case 5: //grade de l'entraineur
        grade = static_cast<CoachGrade>(std::stoi(line));
      break;
    }
    std::cout << line << '\n';
  }

  Coach c = Coach(name, preName, nat, age, grade);
  c.setId(id);

  TmpBase::addCoach(c);
  myfile.close();
}
