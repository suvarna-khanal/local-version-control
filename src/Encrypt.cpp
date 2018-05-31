#include "Encrypt.h"

Encrypt::Encrypt()
{

}
Encrypt::~Encrypt()
{

}

std::string Encrypt::encrypt_string(const std::string& input)
{
	
	size_t sz = input.length();
	unsigned int padding = (sz % sizeof(int));
	std::string new_input(input.begin(), input.end()-2);
	//int encrypted = (int *)(&input);
	return new_input;
}

