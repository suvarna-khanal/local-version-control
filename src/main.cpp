//#include "Globals.h"
#include "Repository.h"
#include "Commit.h"

static Repository repository;
static Commit commit;

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

        std::string&& username = "";
        std::string&& password = "";

		bool credential_status = repository.get_info(username, password);
		if(credential_status)
		{
			repository.create_repository(argv[2], username, password);
			
		}

	}

	else if(std::string(argv[1])=="commit")
	{
		int a = 0;
	}

	return 0;
}
