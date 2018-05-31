#ifndef BRANCH_H
#define BRANCH_H
#include <string>
class Branch
{
	std::string author = "";
	std::string password = "";
	std::string branch_name = "";
	
	public:
		Branch();	
		virtual ~Branch();
		
		int create_branch(const std::string& branch_name);


};



#endif //BRANCH_H
