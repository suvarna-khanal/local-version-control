#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <iostream>
#include <fstream>
#include <boost/filesystem.hpp>
#include "Hash.h"

#define CONFIG_FILE 	".lovec_config.txt"
#define END  			+"\n"

class Repository
{
	public:
	  Repository();
	  virtual ~Repository();

	  int create_repository(const char* repo_loc, const std::string& username, const std::string& password);
	  bool get_info(std::string& username, std::string& password);
	  bool validate_username(const std::string& username);
	  bool validate_password(const std::string& password);
	  int generate_config_file(const std::string& username, const std::string& password);




};

#endif //REPOSITORY_H
