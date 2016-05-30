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
  std::ifstream myfile;

  for (auto &f : files) {
    myfile.open ("./database/" + f);
    if (f.find(".comp") != std::string::npos)
      parseCompete(myfile, f);
    else if (f.find(".mat") != std::string::npos)
      parseMatch(myfile, f);
    else if (f.find(".tem") != std::string::npos)
      parseTeam(myfile, f);
    else if (f.find(".play") != std::string::npos)
      parsePlayer(myfile, f);
    else if (f.find(".coc") != std::string::npos)
      parseCoach(myfile, f);
    else if (f.find(".ref") != std::string::npos)
      parseRefree(myfile, f);

    myfile.close();
  }
}
