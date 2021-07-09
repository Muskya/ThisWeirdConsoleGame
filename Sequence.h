#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <string>

class Sequence
{
public:
	Sequence();
	virtual ~Sequence();		// destructors always virtual to avoid issues with polymorphism

	static int _seqID;			// defined in .cpp
private:
protected:
	virtual void start() = 0;	// starts the sequence. will loop till _completed is set to true

	bool _completed;
};

#endif