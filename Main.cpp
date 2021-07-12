// C Standard Library Includes
#include <iostream>
#include <string>
#include <fstream>
// User Classes Includes
#include "GameManager.h"
#include "Serialization.h"
#include "Character.h"
#include "BeepMusic.h"
	// Sequences
	#include "MenuSequence.h"
	#include "NewgameSequence.h"
	#include "OptionSequence.h"

using namespace std; // Will only be using standard namespace

// Typedefs
typedef GameManager::GameState GameState;

#define GM_PLAYING GameManager::GameState::Playing
#define GM_MENUING GameManager::GameState::Menuing
#define GM_INVENTORING GameManager::GameState::Inventoring
#define GM_QUITTING GameManager::GameState::Quitting
#define GM_COMBATTING GameManager::GameState::Combatting

int main()
{
	// Welcome message
	cout << "Welcome to the weirdest console game !" << endl;
	cout << "Be ready to embark on a mysterious adventures :)\n\n" << endl;

	// Initializations
	GameState g_state = GM_PLAYING; // Initial gamestate (Playing)
	std::wstring path = PROJECT_DIR; // Path to project's working directory
	Character* character(0); // Initialized after loading/creating a game. DONT FORGET TO DELETE IT.

	// Game Loop
	while (g_state == GM_PLAYING) {
		MenuSequence::start(character);
	}
}

