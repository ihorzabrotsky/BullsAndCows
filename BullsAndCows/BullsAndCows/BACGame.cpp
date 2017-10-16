#include "stdafx.h"
#include "BACGame.h"
#include "BACWordGenerator.h"

#include <iostream>
#include <string>

BACGame::BACGame() {
	bullsCount = 0;
}

BACGame::~BACGame() {
}

void BACGame::start() {
	std::cout << "Game started...\n";

	BACWordGenerator wordGenerator = BACWordGenerator();

	// game cycle

}
