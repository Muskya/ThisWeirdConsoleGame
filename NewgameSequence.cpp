#include <iostream>

#include "NewgameSequence.h"

using namespace std;

void NewgameSequence::start() {
	char input;
characterCreation:
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
		cout << "-Chance: 6" << endl;
		cout << "-Clarity: 7" << endl;
		cout << "\n Create a new game with this class ? (Y/N) " << flush;
		do { cin >> input; } while (input != 'Y' && input != 'N' && input != 'y'
			&& input != 'n');
		system("CLS");

		if (input == 'Y' || input == 'y') {
			//Serializes data
			//Starts Intro/Sequence/Level 01
		}
		else {
			//NewgameSequence::start(); // Goes back to class selection
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
		MenuSequence::start();
		break;
	}

}