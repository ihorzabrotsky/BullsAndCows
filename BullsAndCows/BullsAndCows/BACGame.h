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
};
