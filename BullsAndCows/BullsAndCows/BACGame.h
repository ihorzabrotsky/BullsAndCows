#include "BACWord.h"

typedef unsigned int uint;

#pragma once
class BACGame
{
public:
	BACGame();
	~BACGame();

	void start();

private:
	uint bullsCount;
	uint cowsCount;

	bool isGameGoing;

	uint triesLeft;

	BACWord word;
};
