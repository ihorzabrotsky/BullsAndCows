#include "stdafx.h"
#include "BACWordGenerator.h"
#include <ctime>

static const uint LETTERS_AMOUNT = 26;
static const uint FIRST_LETTER_ASCII_CODE = 97;

BACWordGenerator::BACWordGenerator()
{
}


BACWordGenerator::~BACWordGenerator()
{
}

std::string BACWordGenerator::generateRandomWordOfLength(uint length) {
	std::string resultString = "";

	// randomly peak length symbols

	srand((int)time(0));

	for (uint i = 0; i < length; i++) {
		// get random value from 97 to 122
		uint value = rand() % LETTERS_AMOUNT + FIRST_LETTER_ASCII_CODE;

		resultString.push_back(char(value));
	}

	return resultString;
}