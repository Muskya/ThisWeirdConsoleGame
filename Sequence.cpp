#include "Sequence.h"

using namespace std;

Sequence::~Sequence() {}

void Sequence::startMenuSequence(Character* character)
{
	char input;
	cout << "	 ---Main Menu---   " << endl;
	cout << "1. Start a new game" << endl;
	cout << "2. Load a game" << endl;
	cout << "3. Options" << endl;
	cout << "4. Quit (Not implemented yet)" << endl;
	cout << "\n\n\t\t\t By Theo R." << endl;

	cout << "Choose an option: " << flush;
	do { cin >> input; } while (input != '1' && input != '2' && input != '3' && input != '4');
	system("CLS"); // Clears the console

	switch (input) {
	case '1':
		Sequence::startNewgameSequence(character);
		break;
	case '2':
		// sequence transition to LoadgameSequence
		break;
	case '3':
		// sequence transition to OptionSequence
		Sequence::startOptionSequence(character);
		break;
	case '4':
		// Fully exits the program (any serialization / security handle first ?)
		break;
	}
}
void Sequence::startOptionSequence(Character* character) {
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
		Sequence::startMenuSequence(character);
		break;
	}
}
void Sequence::startNewgameSequence(Character* character) {
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
	system("CLS"); // Try to always use "<< flush" before a system("") command

	switch (input) {
	case '1':
		// Temporary description
		cout << "You chose Wanderer." << endl;
		cout << "Wanderers can choose the path of their choice." << endl;
		cout << "----------------------------------------------" << endl;
		cout << "Statistics:" << endl;
		cout << "-Health: 30" << endl;
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
			cout << "Choose your name: " << flush; cin >> name;
			system("CLS");

			// HP30, LV1, XP0, STG11, DEF9, CHA5, CLA3
			character = new Character(name, 30, 1, 0, 11, 9, 5, 3);

			Serialization::Save(SAVE_PATH, character);
			Sequence::startSequence01(character);
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
		Sequence::startMenuSequence(character);
		break;
	}
}
void Sequence::startSequence01(Character* character) {
	cout << ". . . . . . . . . . . ." << endl;
	BeepMusic::SuspenseDoubleBeep();
	system("pause");

	cout << ". . . . . . . . . . . ." << endl;
	BeepMusic::SuspenseDoubleBeep();
	system("pause");

	cout << "\n>Hello ?..." << endl;
	cout << "\nOh. There you are. I thought we would never find you !" << endl;
	system("pause");

	cout << "\n> Where am I ?" << endl;
	cout << "\nYou lost consciousness hours ago. Take my hand !" << endl;
	system("pause"); 

	// HP15, LV0, XP0, STG5, DEF4, CHA0, CLA0
	Character* e_d01 = new Character("???", 15, 0, 0, 5, 4, 0, 0); // Enemy
	Duel* d01 = new Duel(character, e_d01); // Duel
	d01->start();

	delete d01; // Only delete duel. duel's destructor deletes enemy ptr.
	system("CLS");
	
	cout << "\n You fought well, ahaha !" << endl;
	system("pause");

	cout << "\n> Well, thanks ... ?" << endl;
	// ... //
}