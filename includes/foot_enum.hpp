#ifndef FOOT_ENUM_HPP
#define FOOT_ENUM_HPP

#include <iostream>
#include <cstdlib>

enum RefClas {
	elite = 0,
	categorie1,
	categorie2,
	categorie3
};

enum RefPost {
	central = 0,
	assistant,
	remplaceant
};

enum PlayerPost {
	gardienDeBut = 0,
	defenceur,
	milieuDeTerrain,
	attaquant
};

enum CoachGrade {
	premierNiveau = 0,
	deuxiemeNiveau,
	troisiemeNiveau,
	niveauA_UEFA,
	niveauB_UEFA
};

void 	CompeteManager();
void 	MatchManager();
void 	TeamManager();
void 	PlayerManager();
void 	CoachManager();
void 	RefreeManager();

#endif
