#include "Hash.h"

Hash::Hash()
{

	//ctor
}

Hash::~Hash()
{
	//dtor

}

int Hash::generate_hash(std::string& input_str, std::string& hash)
{

	hash = std::move(sha512(input_str));

	return 0;
}

