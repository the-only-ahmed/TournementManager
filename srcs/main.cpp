#include "foot_enum.hpp"

int     mainMenu() {
  int   choice = -1;
  while (choice < 0 || choice > 6) {
    std::cout << "1-Gestion de Competition" << std::endl;
    std::cout << "2-Gestion de Match" << std::endl;
    std::cout << "3-Gestion d'Equipe" << std::endl;
    std::cout << "4-Gestion de Joueurs" << std::endl;
    std::cout << "5-Gestion d'Entraineur" << std::endl;
    std::cout << "6-Gestion d'Arbitre" << std::endl;
    std::cout << "0-Exit" << std::endl;

    std::cin >> choice;
    system("clear");
  }
  return choice;
}

int     main() {
  parseFiles();

  void (*inputFunctionPtr[6])(void);
  inputFunctionPtr[0] = CompeteManager;
  inputFunctionPtr[1] = MatchManager;
  inputFunctionPtr[2] = TeamManager;
  inputFunctionPtr[3] = PlayerManager;
  inputFunctionPtr[4] = CoachManager;
  inputFunctionPtr[5] = RefereeManager;

  while (true) {
    int choice = mainMenu();
    if (choice == 0)
      break;

    inputFunctionPtr[choice-1]();
  }

  saveChanges();
  return 0;
}
