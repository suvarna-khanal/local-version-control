#ifndef REPOSITORY_H
#define REPOSITORY_H


#include <iostream>
#include <fstream>
#include <boost/filesystem.hpp>
#include <unordered_map>

#include "Globals.h"
#include "Hash.h"
#include "File_IO.h"
#include "Repo_Structs.h"

class Repository
{

	std::string hashed_password = "";
	std::string hashed_username = "";
	std::string creation_date 	= "";
	unsigned int commits_count	= "";
	std::unordered_map<std::string, FILE_PROP> files = {};


	public:
		
	  Repository();
	  virtual ~Repository();

	  int create_repository(const char* repo_loc, const std::string& username, const std::string& password);
	  bool get_credentials(std::string& username, std::string& password);
	  bool validate_username(const std::string& username);
	  bool validate_password(const std::string& password);
	  int generate_config_file(const char* repo_loc, const std::string& username, const std::string& password);
	  int get_config_info(const char* repo_loc, std::unordered_map<std::string, std::string>& config_info);




};

#endif //REPOSITORY_H
