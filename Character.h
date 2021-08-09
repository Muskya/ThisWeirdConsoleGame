#ifndef CHARACTER_H
#define CHARACTER_H

// C++/C Standard Library Includes
#include <iostream>
#include <string>
#include <ctime> // For Random Damage Add in Attack Dmg Calculus

// User Headers Includes
#include "Weapon.h"
#include "Inventory.h"

class Character
{
private:
protected:
	std::string name;
	int level, exp, health;
	int stg, def, cha, cla;

	Weapon* rightHand;

	virtual void takeDamage(int amount);

public:
	Character() = default;
	Character(std::string name);
	Character(std::string name, int health);
	Character(std::string name, int health, int level, int exp, 
		int stg, int def, int cha, int cla);
	virtual ~Character();

	void attack(Character* target);
	void changeWeapon(Weapon* weap);

	bool isDead() const;
	virtual void status();

	// Accessors / Mutators
	std::string getName();
	int getHealth();  int getLevel(); int getExp();
	int getStg(); int getDef(); int getCha(); int getCla();

	virtual Weapon* getRightHand();
};

#endif

