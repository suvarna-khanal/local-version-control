#ifndef HASH_H
#define HASH_H

#include <string>
#include "sha512.h"


class Hash
{


public:

	Hash();
	virtual ~Hash();

	static int generate_hash(const std::string& input_str, std::string& hash);


};


#endif //HASH_H