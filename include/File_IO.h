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

class File_IO
{

public:

    std::fstream file;

	File_IO();
	virtual ~File_IO();

	bool file_write(const std::string& file_name, const std::string& contents);
	bool file_read(const std::string& file_name, std::string& contents);
	bool file_read_vec(const std::string& file_name, std::vector<std::string>& contents);
	unsigned long int get_line_count(const std::string& file_name);
	unsigned long int get_file_size(const std::string& file_name);
	bool get_file_hash(const std::string& file_name, std::string& hash_value);


};


static File_IO s_file;


#endif //FILE_IO_H
