#include "File_IO.h"

File_IO::File_IO()
{

	//ctor
}

File_IO::~File_IO()
{
	//dtor
	
}

bool File_IO::file_write(const std::string& file_name, const std::string& contents)
{

	file.open(file_name, std::fstream::out);	

	if(!file.is_open())
	{
		std::cerr<<"Error opening file!"<<std::endl;
		return false;
	}

	file << contents;

	file.close();

	return true;

}

bool File_IO::file_read(const std::string& file_name, const std::string& contents)
{

	file.open(file_name, std::fstream::in);

	if(!file.is_open())
	{

		std::cerr<<"Error opening file!"<<std::endl;
		return false;
	}

	file >> contents;

	file.close();

	return true;

}