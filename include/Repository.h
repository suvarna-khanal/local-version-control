#ifndef REPOSITORY_H
#define REPOSITORY_H
//#define BOOST_NO_EXCEPTIONS
//#define BOOST_EXCEPTION_DISABLE
//#define BOOST_NOEXCEPT_OR_NOTHROW

#include <iostream>
#include <fstream>
#include <boost/filesystem.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/serialization/map.hpp>


//#include <boost/throw_exception.hpp>
//#include <boost/exception/all.hpp>
//#include <boost/serialization/hash_map.hpp>
#include <unordered_map>

#include "Globals.h"
#include "Hash.h"
#include "File_IO.h"
#include "Repo_Structs.h"



class Repository
{
    	std::string path			= "";
    	std::string project_name		= "";
    	std::string repo_size			= "";
    	std::string hashed_password 		= "";
    	std::string hashed_username 		= "";
    	time_t creation_date 			= 0 ;//it is long int which gives seconds elapsed since epoch(1st Jan 1970). use std::cout<<std::ctime(&creation_date)
	unsigned int commits_count		= 0 ;
	std::map<std::string, FILE_PROP> files;

	public:

	  Repository();
	  virtual ~Repository();

	  int create_repository(const char* repo_loc, const std::string& username, const std::string& password);
	  bool get_credentials(std::string& username, std::string& password);
	  bool validate_username(const std::string& username);
	  bool validate_password(const std::string& password);
	  int generate_config_file(const char* repo_loc, const std::string& username, const std::string& password);
	  int get_config_info(const char* repo_loc, std::map<std::string, std::string>& config_info);
	  inline bool serialize_bin(const std::string& file_name, const Repository& repo);
	  inline bool deserialize_bin(const std::string& file_name, Repository& repo);

	  template<typename Archive>
      	  void serialize(Archive &ar, const unsigned int)
      	  {
            ar & hashed_password ;
            ar & hashed_username ;
            ar & creation_date 	 ;
            ar & commits_count	 ;
            ar & files           ;
      	  }

      	void print_repo_info(Repository& repo)
      	{
            std::cout<<"/***************Repository Information****************/"<<std::endl;
            std::cout<<"\tPath        : "<<repo.path<<std::endl;
            std::cout<<"\tProject Name: "<<repo.project_name<<std::endl;
            //std::cout<<"\tUsername    : "<<repo.username<<std::endl;
            std::cout<<"\tSize        : "<<repo.repo_size<<std::endl;
            std::cout<<"\tCreated on  : "<<std::ctime(&repo.creation_date)<<std::endl;
            std::cout<<"\tCommits     : "<<repo.commits_count<<std::endl;
            std::cout<<"\tFiles added : "<<std::endl;
            //repo.files.print();
            std::cout<<"/*******************************************************/"<<std::endl;

      	}





};


static Repository saved_repo_info;

#endif //REPOSITORY_H
