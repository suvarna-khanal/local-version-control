#ifndef REPO_STRUCTS_H
#define REPO_STRUCTS_H

#include <string>

struct FILE_PROP
{
	unsigned long int lines   = 0;
	unsigned long int size    = 0
	std::string hash_value 	  = "";
	std::string last_mod_date = "";
	std::string comments 	  = "";
};

#endif //REPO_STRUCTS_H