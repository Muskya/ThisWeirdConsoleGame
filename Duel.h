#ifndef DUEL_H
#define DUEL_H

#include "Character.h"

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
public:
	Duel(Character* player, Character* enemy);
	~Duel();

	void start();
	
	inline Character* getPlayer() { return player; }
	inline Character* getEnemy() { return enemy; }
};

#endif