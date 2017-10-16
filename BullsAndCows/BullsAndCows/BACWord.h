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
	
	bool isEqualToString(const std::string &string);

	uint getBulls(const std::string &string);
	uint getCows(const std::string &string);

private:
	std::string string;
};

