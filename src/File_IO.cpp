#include "File_IO.h"


File_IO::File_IO()
{

	//ctor
}

File_IO::~File_IO()
{
	file.close();
	//dtor
	
}


bool File_IO::file_write(const std::string& file_name, const std::string& contents)
{

	file.open(file_name, std::fstream::out);	

	if(!file.is_open())		
	{
		std::cerr<<"Error opening file "<<APOS<<file_name<<APOS<<std::endl;

		return false;
	}

	file << contents;
	
	file.close();

	return true;

}

bool File_IO::file_read(const std::string& file_name, std::string& contents)
{

	contents = "";

	file.open(file_name, std::fstream::in);

	if(!file.is_open())
	{

		std::cerr<<"Error opening file "<<APOS<<file_name<<APOS<<std::endl;

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


bool File_IO::file_read_vec(const std::string& file_name, std::vector<std::string>& contents)
{

	contents.clear();

	file.open(file_name, std::fstream::in);

	if(!file.is_open())
	{

		std::cerr<<"Error opening file "<<APOS<<file_name<<APOS<<std::endl;

		return false;
	}

	std::string&& str = "";

	while(std::getline(file, str))
	{

		contents.push_back(std::move(str));
		
	}

	file.close();

	return true;

}



unsigned long int File_IO::get_line_count(const std::string& file_name)
{

	unsigned long int line_count = 0;
	std::string&& str = "";

	file.open(file_name, std::fstream::in);

	if(!file.is_open())
	{
		std::cerr<<"Error opening file "<<APOS<<file_name<<APOS<<std::endl;
		return line_count;
	}



	while(std::getline(file, str))
	{
		++line_count;
	}

	file.close();

	return line_count;
}


unsigned long int File_IO::get_file_size(const std::string& file_name)
{

	unsigned long int&& file_size = boost::filesystem::file_size(file_name.c_str());

	return file_size;
}

bool File_IO::get_file_hash(const std::string& file_name, std::string& hash_value)
{
	hash_value = "";
	std::string&& contents = "";

	file_read(file_name, contents);

	Hash::generate_hash(contents, hash_value);

	return true;

}

