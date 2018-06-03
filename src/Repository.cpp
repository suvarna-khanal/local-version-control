#include "Repository.h"

Repository::Repository()
{
	//ctor

}

Repository::~Repository()
{
	//dtor
}

int Repository::create_repository(const char* repo_loc, const std::string& username, const std::string& password)
{
	boost::filesystem::path dir_path(repo_loc);
	if(boost::filesystem::create_directory(dir_path))
	{

        	generate_config_file(repo_loc, username, password);

		std::cerr<<"Repository created successfully!"<<std::endl;
		return 0;
	}
	std::cerr<<"Error creating Repository"<<std::endl;

	return -1;
}


int Repository::generate_config_file(const char* repo_loc, const std::string& username, const std::string& password)
{


    std::string&& hashed_username = "";
    std::string&& hashed_password = "";

    Hash::generate_hash(username, hashed_username);
    Hash::generate_hash(password, hashed_password);

    std::string config_file_path(repo_loc);
    config_file_path += PATH_CONCAT + CONFIG_FILE_G; 

    std::string config_info = hashed_username END;
    config_info += hashed_password END;

    FILE_ACCESS file_write(config_file_path, config_info);

    

    return 0;

}

int Repository::get_config_info(const char* repo_loc, std::unordered_map<std::string, std::string>& config_info)
{

    std::string config_file_path(repo_loc);
    config_file_path += PATH_CONCAT + CONFIG_FILE_G;

    std::vector<std::string>&& contents = {};
    FILE_ACCESS file_read_vec(repo_loc, contents);

}

bool Repository::get_credentials(std::string& username, std::string& password)
{
	short&& username_counter = 3;
	short&& password_counter = 3;
	bool&& username_status = false;

	do
	{

        if(!username_status)
        {
            std::cerr<<"New Username: ";
            std::getline(std::cin, username);
            --username_counter;

            if(validate_username(username))
            {
                username_status = true;
            }
            else if(username_counter)
            {
                continue;
            }
            else if(!username_counter)
            {
                break;
            }
        } ++username_counter;

        std::cerr<<"New Password: ";
        std::getline(std::cin, password);
        --password_counter;

        if(validate_password(password))
        {
            break;
        }


	}while(password_counter!=0);

    if(!username_counter or !password_counter)
    {
        std::cerr<<"Maximun attempts exceeded!"<<std::endl;
        return false;
    }

	return true;

}

bool Repository::validate_username(const std::string& username)
{


	if(username.empty())
	{
		std::cerr<<"Username cannot be empty!"<<std::endl;
        return false;
	}
	else if(username.find(" ")!=std::string::npos)
	{
		std::cerr<<"Username cannot have space!"<<std::endl;
        return false;
	}


	return true;
}



bool Repository::validate_password(const std::string& password)
{
    if(password.empty())
    {
        std::cerr<<"Password cannot be empty!"<<std::endl;
        return false;
    }

    else if(password.length()<6)
    {
        std::cerr<<"Password length should be greater than 6"<<std::endl;
        return false;
    }



	return true;
}













