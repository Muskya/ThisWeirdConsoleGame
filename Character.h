#ifndef CHARACTER_H
#define CHARACTER_H

#include "Weapon.h"

#include <iostream>
#include <string>

class Character
{
private:
protected:
	//inherited fields
	std::string name;
	int level, exp;
	int health;
	int stg, def, cha, cla;

	Weapon* rightHand; //offensive

	//inherited methods
	virtual void takeDamage(int amount);

public:
	//static members
	static int nbChar;

	Character(std::string name);
	Character(std::string name, int health);
	virtual ~Character();

	void attack(Character* target);
	void changeWeapon(Weapon* weap);

	bool isDead() const;
	virtual void status();

	// Accessors / Mutators
	int getHealth();
	virtual Weapon* getRightHand();
};

#endif

