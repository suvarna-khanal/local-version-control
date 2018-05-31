#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <string>
class Encrypt
{
	public:
		Encrypt();
		virtual ~Encrypt();
		
		std::string encrypt_string(const std::string& input);


};

#endif
