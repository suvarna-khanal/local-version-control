#include <iostream>
#include <string>

#include "create-repo.h"

int main(int argCount, char** args)
{
	std::string repo_name = args[1];//repository name
	std::string repo_loc  = args[2];//repository location
	std::cout<<argCount<<std::endl;
	if(argCount!=3)
	{
		std::cerr<<"Usage: create-repo (repository name) (repository location)"<<std::endl;
	}
	
	return 0;
}
