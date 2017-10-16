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


void BACWord::setWord(const std::string &string) {
	this->string = string;
}

uint BACWord::getSize() {
	return string.size();
}