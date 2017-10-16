#include <string>

typedef unsigned int uint;

#pragma once
class BACWordGenerator
{
public:
	BACWordGenerator();
	~BACWordGenerator();

	std::string generateRandomWordOfLength(uint length);
};

