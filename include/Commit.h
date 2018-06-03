#ifndef COMMIT_H
#define COMMIT_H

#include "Globals.h"
#include "File_IO.h"
#include "Repository.h"
#include <vector>

class Commit
{

public:

	Commit();
	virtual ~Commit();

	int detect_changed_files(const char* location, std::vector<std::string>& changed_files);

};

#endif //COMMIT_H