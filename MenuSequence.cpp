// C Standard Library Includes
#include <iostream>

// User Classes Includes
#include "MenuSequence.h"

using namespace std; // No other namespace will be used

MenuSequence::MenuSequence() : Sequence() 
{
	// Some initializations ...
}

MenuSequence::~MenuSequence()
{
	/* Delete/Free some objects before this 
	   MenuSequence object is deleted. */
}

void MenuSequence::start() 
{
	cout << "Welcome to the weirdest console game !"<< endl;
	cout << "                                      "<< endl;
	cout <<			 "--- Main Menu ---"			<< endl;
	cout << "1. Start a new game"					<< endl;
	cout << "2. Load a game"						<< endl;
	cout << "3. Options"							<< endl;
	cout << "                                      "<< endl;
	cout << "                            By Theo R."<< endl;
	cout << "                                      "<< endl;
	cout << "                                      "<< endl;

	// User Input
	
}