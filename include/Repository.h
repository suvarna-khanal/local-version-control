#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <iostream>
#include <boost/filesystem.hpp>
#include "Hash.h"

class Repository
{
	public:
	  Repository();
	  virtual ~Repository();

	  int create_repository(const char* repo_loc);
	  bool get_info(std::string& username, std::string& password);
	  bool validate_username(const std::string& username);
	  bool validate_password(const std::string& password);




};

#endif //REPOSITORY_H
