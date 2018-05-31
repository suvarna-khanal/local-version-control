#include <iostream>
#include "Repository.h"
int main(int argc, char* argv[])
{
	/*std::cout<<argc<<std::endl;
	std::cout<<argv[0]<<std::endl;
	std::cout<<argv[1]<<std::endl;
	std::cout<<argv[2]<<std::endl;*/
	if(argc<3)
	{
		std::cerr<<"Usage: lovec [action]"<<std::endl;
		return -1;
	}	

	if(std::string(argv[1])=="create-repo")
	{
		//std::cout<<"here i come "<<argv[2]<<std::endl;
		
		Repository repository;
		bool credential_status = repository.get_info();
		if(credential_status)
		{
			repository.create_repository(argv[2]);
		}
		//repository.create_repository(argv[2]);
	}

	return 0;
}
