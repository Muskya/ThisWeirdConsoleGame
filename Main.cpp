#include <iostream>
#include <string>

using namespace std;

// The different game states
enum class GameState {
	Playing, Menuing, Combatting, Dead
};

int main()
{
	// Initializations
	GameState g_state = GameState::Playing;

	// Game Loop
	while (g_state == GameState::Playing) {
		break;
	}

	cout << "Test";
}

