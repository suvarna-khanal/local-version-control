#ifndef FILE_IO_H
#define FILE_IO_H

#include <fstream>

class File_IO
{

public:

	File_IO();
	virtual ~File_IO();

	int file_write(const std::string& file_name, const std::string& contents);
	int file_read(const std::string& file_name, const std::string& contents);


};


#endif //FILE_IO_H