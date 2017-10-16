#include "stdafx.h"
#include "BACGame.h"
#include "BACWordGenerator.h"

#include <iostream>
#include <string>

static const uint TRIES_COUNT = 10;
static const uint WORD_LENGTH = 5;

BACGame::BACGame() {
	bullsCount = 0;
	cowsCount = 0;

	isGameGoing = true;

	triesLeft = TRIES_COUNT;
}

BACGame::~BACGame() {
}

void BACGame::start() {
	std::cout << "Game started...\n";

	BACWordGenerator wordGenerator = BACWordGenerator();

	this->word = wordGenerator.generateRandomWordOfLength(WORD_LENGTH);
	// game cycle

	std::string str;

	while (isGameGoing)	{
		// ask user about the word
		std::cout << "Please, guess the word of " << WORD_LENGTH << " letters: ";
		std::cin >> str;

		if (this->word.getSize() != str.size()) {
			std::cout << "Wrong length of the word\n";
			continue;
		}

		// then we must calculate bulls and cows. 

		std::cout << "Bulls: " << this->word.getBulls(str) << std::endl;
		std::cout << "Cows:  " << this->word.getCows(str) << std::endl;
	}
}
