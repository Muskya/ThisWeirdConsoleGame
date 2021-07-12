#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

// Static class, should not be instantiated
class GameManager
{
public: // Everything should be public there

	// Might not use Menuing, Inventoring, Quitting, Combatting
	enum class GameState { Playing, Menuing, Inventoring, Quitting, Combatting };
};

#endif
