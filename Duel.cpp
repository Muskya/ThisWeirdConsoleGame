#include "Duel.h"

using namespace std;

Duel::Duel(Character* player, Character* enemy)
	: d_done(false), t_done(false), playerFirst(false), turn_nb(0),
	  player(player), enemy(enemy) 
{

}
Duel::~Duel() 
{
	delete enemy;
}

// Checks who has initiative at beginning of duel
void Duel::initiative(bool& playerFirst)
{
	if (player->getLevel() > enemy->getLevel())
		playerFirst = true;
	else
		playerFirst = false;

	/* Will add much more calculus to determine whether 
	* player or enemy has initiative. */	
}

void Duel::playTurns() 
{
	while (player->isDead() || enemy->isDead()) 
	{
		turn_nb++;
		cout << "-Turn " << turn_nb;
		if (playerFirst) {
			if (!player->isDead())
				playerAction();
			if (!enemy->isDead())
				enemyAction();
		}
		else {
			if (!enemy->isDead())
				enemyAction();
			if (!player->isDead())
				playerAction();
		}
	}
}

void Duel::start() 
{
	this->initiative(playerFirst);
	while (!d_done)
	{
		playTurns();
		if (player->isDead() || enemy->isDead())
			d_done = true;
	}
}

void Duel::playerAction() 
{
	char input;
	cout << "Choose an action: " << endl;
	cout << "1. Attack" << endl;
	cout << "2. Defend" << endl;
	cout << "3. Item" << endl;
	cout << "4. Flee" << endl;
	do {
		cin >> input;
	} while (input != '1' && input != '2' && input != '3'
		&& input != '4');

	switch(input) {
	case '1':
		player->attack(enemy);
		break;
	case '2':
		//player->defend();
		break;
	case '3':
		//player->useItem();
		break;
	case '4':
		//this->flee(player)
		//or
		//player->flee();
		break;
	}
}

void Duel::enemyAction() 
{
	enemy->attack(player); 

	/* Will add more scripts for enemy actions */
}

