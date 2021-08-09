#ifndef DUEL_H
#define DUEL_H

// C Standard Library Headers
#include <thread>

// User-Defined Headers
#include "Character.h"
#include "BeepMusic.h"

class Duel
{
private:
	bool d_done, t_done, playerFirst;
	int turn_nb;

	Character* player;
	Character* enemy;

	void initiative(bool& playerFirst);
	void playTurns();
	void playerAction();
	void enemyAction(); // A.I
	void duelWon();
public:
	Duel(Character* player, Character* enemy);
	~Duel();

	void start();
	
	inline Character* getPlayer() const { return player; }
	inline Character* getEnemy() const { return enemy; }
};

#endif