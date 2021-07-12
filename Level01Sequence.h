#ifndef LEVEL01SEQUENCE_H
#define LEVEL01SEQUENCE_H

#include "Sequence.h"

class Level01Sequence : public Sequence
{
public:
	Level01Sequence();
	virtual ~Level01Sequence();

	static void start(Character* character);
protected:
private:
	std::string sequenceName;
};

#endif