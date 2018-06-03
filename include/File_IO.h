#ifndef FILE_IO_H
#define FILE_IO_H

#include <fstream>
#include <iostream>
#include <vector>
#include <boost/filesystem.hpp>

#include "Globals.h"
#include "Hash.h"

#define END  		+"\n"
#define APOS 		"\'"
#define FILE_ACCESS File_IO::file_ptr->get_instance()->

class File_IO
{

	std::fstream file;
	

public:

	File_IO();
	virtual ~File_IO();

	static File_IO* file_ptr;
	static File_IO* get_instance();

	bool file_write(const std::string& file_name, const std::string& contents);
	bool file_read(const std::string& file_name, std::string& contents);
	unsigned long int get_line_count(const std::string& file_name);
	unsigned long int get_file_size(const std::string& file_name);
	bool get_file_hash(const std::string& file_name, std::string& hash_value);


};


#endif //FILE_IO_H