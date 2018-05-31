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

bool Repository::get_info()
{
	char p[10];
	
	std::string username = "";
	std::string password = "";
	std::cerr<<"Set Username: ";
	std::cin>>username;
	std::cin.clear();
	std::cout<<"Set Password: ";
	std::cin>>password;//need to work on this	
	std::cin.clear();
	return validate_password(password);	
	
}

bool Repository::validate_password(std::string& password)
{
	std::cout<<"Entered password is:"<<password<<std::endl;
	unsigned int pass_counter = 3;
	while(pass_counter!=0)
	{
		if(password.empty())
		{
			std::cerr<<"Password cannot be empty!"<<std::endl;
			--pass_counter;
		}

		else if(password.length()<6)
		{
			std::cerr<<"Password length should be greater than 6"<<std::endl;
			--pass_counter;
		}
		
		else
		{
			return true;
		}
		std::cout<<"Set Password: ";
		std::cin.clear();
		std::cin>>password;
	}

	return false;
}













