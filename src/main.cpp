//#include "Globals.h"
#include "Repository.h"
#include "Commit.h"
#include "File_IO.h"

static Repository repository;
static Commit commit;

int main(int argc, char* argv[])
{
	
	if(argc<3)
	{
		std::cerr<<"Usage: lovec [action]"<<std::endl;
		return -1;
	}

	if(std::string(argv[1])=="create-repo")
	{

     	std::string&& username = "";
    	std::string&& password = "";

		bool credential_status = repository.get_credentials(username, password);
		if(credential_status)
		{
			repository.create_repository(argv[2], username, password);
			
		}

	}

	else if(std::string(argv[1])=="commit")
	{

		std::vector<std::string> changed_files = {};
		commit.	detect_changed_files(argv[2], changed_files);//argv[2] is the file location



	}

	return 0;
}
