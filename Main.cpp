/* C/C++ Standard Library Headers */
#include <iostream>
#include <string>
#include <fstream>
/* User-Defined Headers */
	// System
#include "GameManager.h"
#include "BeepMusic.h"
#include "Sequence.h"
	// Entities
#include "Character.h"

/* MACROS (DEFINES), TYPEDEFS... */
#define GM_PLAYING GameManager::GameState::Playing
// SAVE_PATH (Macro made in VS project properties) = savefile location

// Won't be using another namespace whatsoever
using namespace std;

int main()
{
	cout << "Welcome to the weirdest console game !" << endl;
	cout << "Be ready to embark on a mysterious adventure... :)\n\n\n" << endl;

	// Initializations
	GameManager::GameState g_state = GM_PLAYING; // Initial game state (Playing)
	Character* character(nullptr); // Initialized after loading/creating a game. DONT FORGET TO DELETE IT.

	// Game Loop
	while (g_state == GM_PLAYING) {
		Sequence::startMenuSequence(character);
	}

	delete character;
}