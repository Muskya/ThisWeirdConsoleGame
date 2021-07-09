#ifndef SEQUENCE_H
#define SEQUENCE_H

// C Standard Library Includes
#include <string>


// User Classes Includes

class Sequence
{
public:
	Sequence();
	virtual ~Sequence();		// destructors always virtual

	static int _seqID;
private:
protected:
	virtual void start() = 0;	// starts the sequence.

	// Other Types (Classes)
	

	// Primitive Types
	bool _completed;
};

#endif