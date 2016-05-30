#include "foot_enum.hpp"
#include "TmpBase.hpp"

void    createNewComp() {
  std::string name;
  int         nbTour;

  std::cout << "name: ";
  std::cin >> name;

  std::cout << "nombre de tours: ";
  std::cin >> nbTour;

  Competition c = Competition(name, nbTour);
  TmpBase::addCompet(c);

  //TODO: add games
  system("clear");
}

void    deleteComp() {
  while (true) {
    TmpBase::showCompet(true);
    std::cout << "(-1) Retour" << std::endl;
    std::cout << "0-Exit" << std::endl;

    int choice = -2;
    std::cin >> choice;
    if (choice == -1)
      return;
    else if (choice == 0) {
      saveChanges();
      exit(0);
    }
    else if (choice <= static_cast<int>(TmpBase::getCompets().size()))
      TmpBase::deleteCompet(choice-1);

    system("clear");
  }
}

void    editComp() {
  while (true) {
    TmpBase::showCompet(true);
    std::cout << "(-1) Retour" << std::endl;
    std::cout << "0-Exit" << std::endl;

    int choice = -2;
    std::cin >> choice;
    if (choice == -1)
      return;
    else if (choice == 0) {
      saveChanges();
      exit(0);
    }
    //else if (choice <= TmpBase::getCompets().size())
      //to edit
    system("clear");
  }
  //TODO: edit to finish
}
