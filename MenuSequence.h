#ifndef MENUSEQUENCE_H
#define MENUSEQUENCE_H

#include "Sequence.h"

class MenuSequence : public Sequence
{
public:
	MenuSequence();
	virtual ~MenuSequence();

	virtual void start(); // redefinition of base class' function
private:
protected:
};

#endif
