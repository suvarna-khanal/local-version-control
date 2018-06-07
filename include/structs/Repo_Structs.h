#ifndef REPO_STRUCTS_H
#define REPO_STRUCTS_H

#include <string>

struct FILE_PROP
{
	unsigned long int lines   = 0;
	unsigned long int size    = 0;
	std::string hash_value 	  = "";
	time_t last_mod_date = "";
	time_t added_date;
	std::string comments 	  = "";

	template<typename Archive>
	void serialize(Archive& ar, const unsigned int)
	{
		ar & lines;
		ar & size;
		ar & hash_value;
		ar & last_mod_date;
		ar & comments;

	}


};

#endif //REPO_STRUCTS_H
