#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

class GameManager 
{
public: // Everything should be public there
	enum class GameState { Playing };
	static GameState g_state;
};

#endif