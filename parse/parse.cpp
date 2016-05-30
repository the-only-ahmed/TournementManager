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
  t_FileMap mp;

  for (auto &f : files) {

    if (f.find(".comp") != std::string::npos)
      mp["comp"].push_back(f);
      //parseCompete(myfile, f);
    else if (f.find(".mat") != std::string::npos)
      mp["mat"].push_back(f);
      //parseMatch(myfile, f);
    else if (f.find(".tem") != std::string::npos)
      mp["team"].push_back(f);
      //parseTeam(myfile, f);
    else if (f.find(".play") != std::string::npos)
      mp["play"].push_back(f);
      //parsePlayer(myfile, f);
    else if (f.find(".coc") != std::string::npos)
      mp["coc"].push_back(f);
      //parseCoach(myfile, f);
    else if (f.find(".ref") != std::string::npos)
      mp["ref"].push_back(f);
      //parseRefree(myfile, f);
  }
}
