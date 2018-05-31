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
	  bool get_info();
	  bool validate_password(std::string& password);
	
		


};

#endif //REPOSITORY_H
