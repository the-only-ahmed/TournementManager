#include "foot_enum.hpp"
#include "TmpBase.hpp"

void  CompeteManager() {
  while (true) {
    int choice = -2;
    do {
      std::cout << "1-creer une nouvelle Competition" << std::endl;
      std::cout << "2-supprimer une Competition" << std::endl;
      std::cout << "3-modifier une Competition" << std::endl;
      std::cout << "4-afficher la liste des Competitions" << std::endl;
      std::cout << "(-1) Retour" << std::endl;
      std::cout << "0-Exit" << std::endl;

      std::cin >> choice;
      system("clear");
    } while (choice < -1 || choice > 4);
    switch (choice) {
      case -1:
        return;
      case 0:
        saveChanges();
        exit(0);
      case 1:
        createNewComp();
        break;
      case 2:
        deleteComp();
        break;
      case 3:
        editComp();
        break;
      case 4:
        TmpBase::showCompet(false);
        break;
    }
  }
}

void  MatchManager() {
  std::cout << "MatchManager" << std::endl;
}

void  TeamManager() {
  std::cout << "TeamManager" << std::endl;
}

void  PlayerManager() {
  std::cout << "PlayerManager" << std::endl;
}

void  CoachManager() {
  std::cout << "CoachManager" << std::endl;
}

void  RefereeManager() {
  std::cout << "RefereeManager" << std::endl;
}
