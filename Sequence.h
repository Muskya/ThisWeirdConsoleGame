#ifndef SEQUENCE_H
#define SEQUENCE_H

// C Standard Library Includes
#include <string>
#include <Windows.h>

// User Classes Includes

class Sequence
{
public:
	Sequence();
	virtual ~Sequence();		// destructors always virtual

	static int _seqID;
protected:
	virtual void start() = 0;	// starts the sequence.
	/* I'm hesitating to make a stop() or changeSequence() function 
	but I think start() is enough since the sequences are looped until
	_completed is set to True. Will see later. */

	// Primitive Types
	bool _completed;
};

#endif