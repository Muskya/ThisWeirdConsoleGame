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
	while (!player->isDead() && !enemy->isDead()) 
	{
		turn_nb++;

		system("CLS");
		cout << "-Turn " << turn_nb << "-\n" << flush;
		if (playerFirst) { // If player had initiative
			playerAction();
			enemyAction();
			system("pause");
		}
		else { // If enemy had initiative
			enemyAction();
			system("pause");
			playerAction();
		}
	}

	// Victory or Defeat
	if (player->isDead()) {
		d_done = true;
		std::cout << "You lost the battle." << std::endl;
	}
	else if (enemy->isDead()) {
		d_done = true;
		std::cout << "You won the battle." << std::endl;
		// Add looting, gold...
	}
}

void Duel::start() 
{
	// Thread to play the background duel music
	std::thread bgm(BeepMusic::DuelThemeBeepB);
	bgm.detach(); // so the bgm is independant

	this->initiative(playerFirst);
	while (!d_done)
	{
		playTurns();
	}
	system("pause");
}

void Duel::playerAction() 
{
	char input;
	cout << "Choose an action: " << endl;
	cout << "1. Attack" << endl;
	cout << "2. Defend (not implemented yet)" << endl;
	cout << "3. Inventory" << endl;
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
		Inventory::GetInstance()->showInventory();
		std::cout << "What item do you want to use ?" << std::endl;
		// ....
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

void Duel::duelWon() {

}

