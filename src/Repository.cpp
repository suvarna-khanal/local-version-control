#include "Repository.h"

Repository::Repository()
{
	//ctor

}

Repository::~Repository()
{
	//dtor
}

int Repository::create_repository(const char* repo_loc)
{
	boost::filesystem::path dir_path(repo_loc);
	if(boost::filesystem::create_directory(dir_path))
	{
		std::cerr<<"Repository created successfully"<<std::endl;
		return 0;
	}
	std::cerr<<"Error creating Repository"<<std::endl;

	return -1;
}
