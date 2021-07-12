#ifndef SEQUENCE_H
#define SEQUENCE_H

// C Standard Library / Other Includes 
#include <string>
#include <stdlib.h> // For clearing console

// User Classes Includes
#include "Character.h"
#include "BeepMusic.h"
#include "GameManager.h"

class Sequence {
public:
	Sequence();
	~Sequence();
protected:
	virtual void start() = 0; 
	std::string sequenceName;
};

#endif