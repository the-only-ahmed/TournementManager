#ifndef FOOT_ENUM_HPP
#define FOOT_ENUM_HPP

#include <iostream>
#include <cstdlib>
#include <map>
#include <list>
#include <fstream>

typedef std::map<std::string, std::list<std::string>> t_FileMap;

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

void 	parseFiles();
void 	CompeteManager();
void 	MatchManager();
void 	TeamManager();
void 	PlayerManager();
void 	CoachManager();
void 	RefreeManager();

void    parseCompete(std::string fileName);
void    parseMatch(std::string fileName);
void    parseTeam(std::string fileName);
void    parsePlayer(std::string fileName);
void    parseCoach(std::string fileName);
void    parseRefree(std::string fileName);
void    parseCount(std::string fileName);

void 		saveChanges();
void 		saveCount();
void 		savePlayers();
void 		saveCoachs();
void 		saveRefrees();
void 		saveTeams();
void 		saveGames();
void 		saveCompetitions();

#endif
