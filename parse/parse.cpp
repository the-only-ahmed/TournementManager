#include "foot_enum.hpp"
#include <fstream>
#include <dirent.h>
#include <list>

std::list<std::string>  checkDirectory() {
  DIR *dir;
  struct dirent *ent;
  std::list<std::string> files;

  if ((dir = opendir ("./database")) != NULL) {
    /* print all the files and directories within directory */
    while ((ent = readdir (dir)) != NULL) {
      if (ent->d_name[0] != '.')
        files.push_back(ent->d_name);
    }
    closedir (dir);
  } else {
    /* could not open directory */
    perror ("error");
  }
  return files;
}

void    parseFiles() {
  std::list<std::string> files = checkDirectory();
  t_FileMap              mp;

  void (*inputFunctionPtr[7])(std::string);
  inputFunctionPtr[0] = parsePlayer;
  inputFunctionPtr[1] = parseCoach;
  inputFunctionPtr[2] = parseRefree;
  inputFunctionPtr[3] = parseTeam;
  inputFunctionPtr[4] = parseMatch;
  inputFunctionPtr[5] = parseCompete;
  inputFunctionPtr[6] = parseCount;

  for (auto &f : files) {

    if (f.find(".comp") != std::string::npos)
      mp["comp"].push_back(f);
    else if (f.find(".mat") != std::string::npos)
      mp["mat"].push_back(f);
    else if (f.find(".tem") != std::string::npos)
      mp["team"].push_back(f);
    else if (f.find(".play") != std::string::npos)
      mp["play"].push_back(f);
    else if (f.find(".coc") != std::string::npos)
      mp["coc"].push_back(f);
    else if (f.find(".ref") != std::string::npos)
      mp["ref"].push_back(f);
    else if (f.find(".count") != std::string::npos)
      mp["count"].push_back(f);
  }

  int i = 0;
  for (auto const& it : mp) {
    for (auto &f : it.second)
      inputFunctionPtr[i](f);
    i++;
  }
}

void      saveChanges() {
  saveCount();
  savePlayers();
  saveCoachs();
  saveRefrees();
  saveTeams();
  saveGames();
  saveCompetitions();
}
