#include "Duel.h"

using namespace std;

Duel::Duel(Character* player, Character* enemy)
	: d_done(false), t_done(false), playerFirst(false), turn_nb(0),
	  player(player), enemy(enemy) 
{}

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

	/* Will add much more calculus later to determine whether 
	* player or enemy has initiative. */	
}

void Duel::playTurns() 
{
	while (!player->isDead() || !enemy->isDead()) 
	{
		turn_nb++;
		cout << "-Turn " << turn_nb << "-\n" << flush;
		if (playerFirst) { // If player had initiative
			if (!player->isDead()) {
				playerAction();
			}
			if (!enemy->isDead()) {
				enemyAction();
				system("pause");
			}
		}
		else { // If enemy had initiative
			if (!enemy->isDead()) {
				enemyAction();
				system("pause");
			}
			if (!player->isDead()) {
				playerAction();
			}
		}
	}

	// Victory or Defeat
	if (player->isDead()) {

	}
	else if (enemy->isDead()) {

	}
	
}

void Duel::start() 
{
	// Thread to play the background duel music
	std::thread bgm(BeepMusic::DuelThemeBeep);
	system("CLS");
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
	cout << "2. Defend (not implemented yet)" << endl;
	cout << "3. Item (not implemented yet)" << endl;
	cout << "4. Flee (not implemented yet)\n" << endl;
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

