#include <string>

typedef unsigned int uint;

#pragma once
class BACWord
{
public:
	BACWord();
	BACWord(const std::string &string);

	~BACWord();

	void setWord(const std::string &string);

	uint getSize();
	

private:
	std::string string;
};

