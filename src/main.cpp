#include <iostream>
int main(int argc, char* argv[])
{
	if(argc==1 and argv[0]=="lovec")
	{
		std::cerr<<"Usage: lovec [action]"<<std::endl;
		return -1;
	}	

	if(argv[1]=="create-repo")
	{
		//call create-repo
	}

	return 0;
}
