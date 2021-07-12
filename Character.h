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

	Character() = default;
	Character(std::string name);
	Character(std::string name, int health);
	Character(std::string name, int health, int level, int exp, int stg, int def, int cha, int cla);
	virtual ~Character();

	void attack(Character* target);
	void changeWeapon(Weapon* weap);

	bool isDead() const;
	virtual void status();

	// Accessors / Mutators
	int getHealth();
	std::string getName();
	virtual Weapon* getRightHand();
};

#endif

