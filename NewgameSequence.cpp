// C Standard Library Includes
#include <iostream>

// User Headers Includes
#include "NewgameSequence.h"

using namespace std;

void NewgameSequence::start(Character* character) {
	char input;
characterCreation: // Goto point if class selection confirmation is cancelled
	cout << "     ---Character Creation---     " << endl;
	cout << "Choose your class: " << endl;
	cout << "1. Wanderer" << endl;
	cout << "2. Farmer" << endl;
	cout << "3. Saint" << endl;
	cout << "-------------" << endl;
	cout << "4. Go back" << endl;
	
	cout << "Choose an option: " << flush;
	do { cin >> input; } while (input != '1' && input != '2' && input != '3' 
		&& input != '4');
	system("CLS");

	switch (input) {
	case '1':
		// Temporary description
		cout << "You chose Wanderer." << endl;
		cout << "Wanderers can choose the path of their choice." << endl;
		cout << "----------------------------------------------" << endl;
		cout << "Statistics:" << endl;
		cout << "-Strength: 11" << endl;
		cout << "-Defense: 9" << endl;
		cout << "-Chance: 5" << endl;
		cout << "-Clarity: 3" << endl;
		cout << "\n Create a new game with this class ? (Y/N) " << flush;
		do { cin >> input; } while (input != 'Y' && input != 'N' && input != 'y'
			&& input != 'n');
		system("CLS");

		if (input == 'Y' || input == 'y') {
			std::string name;
			cout << "Choose your name: " << endl; cin >> name;
			character = new Character(name, 30, 1, 0, 11, 9, 5, 3);
			// Should save/serialize before starting first act
			Level01Sequence::start(character);
		}
		else {
			goto characterCreation;
		}
		break;
	case '2':
		// Temporary description
		cout << "You chose Farmer." << endl;
		cout << "Farmers have special agriculture/food abilities." << endl;
		cout << "----------------------------------------------" << endl;
		break;
	case '3':
		// Temporary description
		cout << "You chose Saint." << endl;
		cout << "Saints receive a special gift from their divinity." << endl;
		cout << "----------------------------------------------" << endl;

		break;
	case '4': // Goes back to menu
		MenuSequence::start(character);
		break;
	}

}