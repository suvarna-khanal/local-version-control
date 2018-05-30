#include <iostream>
#include <string>
#include <boost/filesystem.hpp>
#include "create-repo.h"

int main(int argCount, char** args)
{
    if(argCount!=2)
    {
        std::cerr<<"Usage: create-repo (repository-path)"<<std::endl;
        return 0;
    }
	char* repo_loc  = args[1];//repository location
	boost::filesystem::path dir_path(repo_loc);
	if(boost::filesystem::create_directory(dir_path))
	{
		std::cerr<<"Repository created successfully"<<std::endl;
		return 0;
	}
	std::cerr<<"Error creating Repository"<<std::endl;

	return -1;
}
