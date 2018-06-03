#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "Globals.h"
#include <iostream>
#include <fstream>
#include <boost/filesystem.hpp>
#include "Hash.h"
#include "File_IO.h"

class Repository
{
	public:
	  Repository();
	  virtual ~Repository();

	  int create_repository(const char* repo_loc, const std::string& username, const std::string& password);
	  bool get_info(std::string& username, std::string& password);
	  bool validate_username(const std::string& username);
	  bool validate_password(const std::string& password);
	  int generate_config_file(const char* repo_loc, const std::string& username, const std::string& password);




};

#endif //REPOSITORY_H
