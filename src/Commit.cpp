#include "Commit.h"

Commit::Commit()
{
	//ctor
}

Commit::~Commit()
{
	//dtor
}

int Commit::detect_changed_files(const char* location, std::vector<std::string>& changed_files)
{

	std::string&& file_path = "hello.txt";

	unsigned long int&& line_count = s_file.get_line_count(file_path);

	unsigned long int&& file_size  = s_file.get_file_size(file_path);

	std::string&& hash_value = "";
	s_file.get_file_hash(file_path, hash_value);

	Repository repo;
	std::map<std::string, std::string> config_info;
	repo.get_config_info(location, config_info);






	return 0;
}


