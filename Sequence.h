#ifndef SEQUENCE_H
#define SEQUENCE_H

// C/C++ Standard Library
#include <string>
#include <stdlib.h> // For clearing console

// User Headers Includes
#include "Character.h"
#include "BeepMusic.h"
#include "GameManager.h"

class Sequence {
public:
	Sequence() = default;
	~Sequence();

	static void startMenuSequence(Character* character);
	static void startNewgameSequence(Character* character);
	static void startOptionSequence(Character* character);
	static void startSequence01(Character* character);
};

#endif