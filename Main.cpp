/* C/C++ Standard Library Includes */
#include <iostream>
#include <string>
#include <fstream>
/* User Headers Includes */
	// System
#include "GameManager.h"
#include "BeepMusic.h"
	// Entities
#include "Character.h"
	// Sequence
#include "Sequence.h"

using namespace std; // Will only be using standard namespace

#define GM_PLAYING GameManager::GameState::Playing
//#define GM_MENUING GameManager::GameState::Menuing /* These 4 will probably not be needed */
//#define GM_INVENTORING GameManager::GameState::Inventoring
//#define GM_QUITTING GameManager::GameState::Quitting
//#define GM_COMBATTING GameManager::GameState::Combatting

int main()
{
	// Welcome message
	cout << "Welcome to the weirdest console game !" << endl;
	cout << "Be ready to embark on a mysterious adventure... :)\n\n\n" << endl;

	// Initializations
	GameManager::GameState g_state = GM_PLAYING; // Initial game state (Playing)
	std::wstring path = PROJECT_DIR; // Path to project's working directory (defined in MSVC Project Properties (Preprocessor))
	Character* character(nullptr); // Initialized after loading/creating a game. DONT FORGET TO DELETE IT.

	// Game Loop
	while (g_state == GM_PLAYING) {
		Sequence::startMenuSequence(character);
	}
}