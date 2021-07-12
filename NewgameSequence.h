#pragma once
#include "Sequence.h"
#include "MenuSequence.h"
#include "Level01Sequence.h"

class NewgameSequence : public Sequence
{
public:
	static void start(Character* character);
};

