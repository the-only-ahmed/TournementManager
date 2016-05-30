#include "foot_enum.hpp"
#include "TmpBase.hpp"

void    createNewPlayer() {
  std::string name, preName, nat;
  int         age, num;
  PlayerPost  post;

  std::cout << "name: ";
  std::cin >> name;

  std::cout << "preName: ";
  std::cin >> preName;

  std::cout << "nationalite: ";
  std::cin >> nat;

  std::cout << "age: ";
  std::cin >> age;

  std::cout << "age: ";
  std::cin >> age;

  int choice = 0;
  while (choice < 1 || choice > 4) {
    std::cout << "1-gardien de but" << std::endl;
    std::cout << "2-defenceur" << std::endl;
    std::cout << "3-milieu de terrain" << std::endl;
    std::cout << "4-attaquant" << std::endl;

    std::cin >> choice;
    system("clear");
  }
  post = static_cast<PlayerPost>(choice);

  Player pl = Player(name, preName, nat, age, post, num);
  TmpBase::addCompet(pl);

  //TODO: add games
}

void    deletePlayer() {
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
  }
}

void    editPlayer() {
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
  }
  //TODO: edit to finish
}
