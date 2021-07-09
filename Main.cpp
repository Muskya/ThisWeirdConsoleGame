// C Standard Library Includes
#include <iostream>
#include <string>

// User Classes Includes
#include "GameManager.h"
#include "MenuSequence.h"

using namespace std;

// Typedefs
typedef GameManager::GameState GameState;

int main()
{
	// Initializations
	GameState g_state = GameState::Playing;
	MenuSequence seq_Menu; // First Sequence to be played

	// Game Loop
	//while (g_state == GameState::Playing) {
	//	//break;
	//	//seq_Menu.start();
	//}

	seq_Menu.start();
}

