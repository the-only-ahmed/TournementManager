#include "Coach.hpp"
#include "Player.hpp"
#include "Refree.hpp"
#include "Team.hpp"
#include "foot_enum.hpp"

void  CompeteManager() {
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
      exit(0);
    case 1:
      std::cout << "new" << std::endl;
      break;
    case 2:
      std::cout << "del" << std::endl;
      break;
    case 3:
      std::cout << "modif" << std::endl;
      break;
    case 4:
      std::cout << "show" << std::endl;
      break;
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

void  RefreeManager() {
  std::cout << "RefreeManager" << std::endl;
}
