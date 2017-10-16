#include "stdafx.h"
#include "BACWord.h"


BACWord::BACWord()
{
}

BACWord::BACWord(const std::string &string) {
	this->string = string;
}

BACWord::~BACWord()
{
}


BACWord::setWord(const std::string &string) {
	this->string = string;
}