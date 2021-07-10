// C Standard Library Includes
#include <iostream>

// User Classes Includes
#include "MenuSequence.h"
#include "NewgameSequence.h"
#include "OptionSequence.h"

using namespace std;

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
	char input;
	cout << "	 ---Main Menu---   " << endl;
	cout << "1. Start a new game" << endl;
	cout << "2. Load a game" << endl;
	cout << "3. Options" << endl;
	cout << "                                      " << endl;
	cout << "                            By Theo R." << endl;
	cout << "                                      " << endl;
	cout << "                                      " << endl;

	cout << "Choose an option: " << flush;
	do { cin >> input; } while (input != '1' && input != '2' && input != '3');
	system("CLS"); // Clears the console

	switch (input) {
	case '1':
		NewgameSequence::start();
		break;
	case '2':
		// sequence transition to LoadgameSequence
		break;
	case '3':
		// sequence transition to OptionSequence
		OptionSequence::start();
		break;
	}
}