#ifndef FILE_IO_H
#define FILE_IO_H

#include <fstream>

class File_IO
{

	std::fstream file;

public:

	File_IO();
	virtual ~File_IO();

	bool file_write(const std::string& file_name, const std::string& contents);
	bool file_read(const std::string& file_name, const std::string& contents);


};


#endif //FILE_IO_H