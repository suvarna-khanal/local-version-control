#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <iostream>
#include <boost/filesystem.hpp>

class Repository
{
	public:
	  Repository();
	  virtual ~Repository();

	  int create_repository(const char* repo_loc);
	  int get_info();
	  bool validate_username(const std::string& username);
	  bool validate_password(const std::string& password);




};

#endif //REPOSITORY_H
