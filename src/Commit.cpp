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

	unsigned long int&& line_count = FILE_ACCESS get_line_count(file_path);

	std::cout<<"LINES: "<<line_count<<std::endl;

	unsigned long int&& file_size  = FILE_ACCESS get_file_size(file_path);

	std::cout<<"SIZE: "<<file_size<<std::endl;

	std::string&& hash_value = "";

	FILE_ACCESS get_file_hash(file_path, hash_value);

	std::cout<<"HASH: "<<hash_value<<std::endl;




	return 0;
}


