#ifndef FILE_IO_H
#define FILE_IO_H

#include <fstream>
#include <iostream>

#include "Globals.h"

#define END  		+"\n"
#define APOS 		"\'"

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


};


#endif //FILE_IO_H