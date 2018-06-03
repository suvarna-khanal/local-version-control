#include "File_IO.h"


File_IO::File_IO()
{

	//ctor
}

File_IO::~File_IO()
{
	//dtor
	
}

File_IO* File_IO::file_ptr = nullptr;
//std::cout<<"is created"<<std::endl;

File_IO* File_IO::get_instance()
{

	if(file_ptr==nullptr)
	{
		file_ptr = new File_IO;
	}

	return file_ptr;
}

bool File_IO::file_write(const std::string& file_name, const std::string& contents)
{

	file.open(file_name, std::fstream::out);	

	if(!file.is_open())		
	{
		std::cerr<<"Error opening file "<<APOS<<file_name<<APOS<<std::endl;
		std::cout<<"here1"<<std::endl;
		return false;
	}

	file << contents;
	std::cout<<"is created file"<<std::endl;
	file.close();

	return true;

}

bool File_IO::file_read(const std::string& file_name, std::string& contents)
{

	file.open(file_name, std::fstream::in);

	if(!file.is_open())
	{

		std::cerr<<"Error opening file!"<<std::endl;
		std::cout<<"here2"<<std::endl;
		return false;
	}

	std::string&& str = "";

	while(std::getline(file, str))
	{

		contents += str END;
		
	}

	file.close();

	return true;

}


