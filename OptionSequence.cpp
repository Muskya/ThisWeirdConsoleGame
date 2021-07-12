#include <iostream>

#include "OptionSequence.h"
#include "MenuSequence.h"

using namespace std;

void OptionSequence::start(Character* character) {
	char input;
	cout << "           ---Options---           " << endl;
	cout << "									" << endl;
	cout << "1. Language (Not implemented yet)" << endl;
	cout << "2. Audio (Not implemented yet)" << endl;
	cout << "3. Input (Not implemented yet)" << endl;
	cout << "-------------" << endl;
	cout << "4. Go back" << endl;

	cout << "\n"; cout << "\n"; 

	cout << "Choose an option: " << flush;
	do { cin >> input; } while (input != '1' && input != '2' && input != '3' 
		&& input != '4');
	system("CLS");

	switch (input) 
	{
	case '4':
		MenuSequence::start(character);
		break;
	}
}