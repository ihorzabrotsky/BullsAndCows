// BullsAndCows.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "BACGame.h"

#include <ctime>

int main()
{
	BACGame bacGame = BACGame();

	bacGame.start();

    return 0;
}

