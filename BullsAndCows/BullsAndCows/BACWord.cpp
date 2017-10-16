#include "stdafx.h"
#include "BACWord.h"
#include <set>

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

bool BACWord::isEqualToString(const std::string &string) {
	if (this->string.compare(string)) {
		return true;
	}

	return false;
}

uint BACWord::getBulls(const std::string &string) {
	if (this->string.size() != string.size()) {
		return 0;
	}

	uint bulls = 0;

	for (int i = 0; i < this->string.size(); i++) {
		if (this->string[i] == string[i]) {
			++bulls;
		}
	}

	return bulls;
}

uint BACWord::getCows(const std::string &string) {
	std::set<char> bullLetters;

	for (int i = 0; i < this->string.size(); i++) {
		if (this->string[i] == string[i]) {
			bullLetters.insert(this->string[i]);
		}
	}

	std::set<char> thisSet;

	for (int i = 0; i < this->string.size(); i++) {
		thisSet.insert(this->string[i]);
	}

	std::set<char> argSet;

	for (int i = 0; i < string.size(); i++) {
		argSet.insert(string[i]);
	}

	for (std::set<char>::iterator it = bullLetters.begin(); it != bullLetters.end(); it++) {
		thisSet.erase(*it);
		argSet.erase(*it);
	}

	bullLetters.clear();

	std::set<char> cowsSet;

	for (std::set<char>::iterator it1 = thisSet.begin(); it1 != thisSet.end(); it1++) {
		for (std::set<char>::iterator it2 = argSet.begin(); it2 != argSet.end(); it2++) {
			if (*it1 == *it2) {
				cowsSet.insert(*it1);
			}
		}
	}

	thisSet.clear();
	argSet.clear();

	uint cowsCount = cowsSet.size();
	cowsSet.clear();

	return cowsCount;
}
