// C Standard Library Includes
#include <iostream>
#include <string>
// User Classes Includes
#include "GameManager.h"
#include "Character.h"
#include "BeepMusic.h"
	// Sequences
	#include "MenuSequence.h"
	#include "NewgameSequence.h"
	#include "OptionSequence.h"

using namespace std; // Will only be using standard namespace

// Typedefs
typedef GameManager::GameState GameState;

int main()
{
	// Welcome message
	cout << "Welcome to the weirdest console game !" << endl;

	// Initializations
	GameState g_state = GameState::Playing;

	// Game Loop
	while (g_state == GameState::Playing) {
		MenuSequence::start();
	}
}

