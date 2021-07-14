#ifndef CHARACTER_H
#define CHARACTER_H

// C++/C Standard Library Includes
#include <iostream>
#include <string>

// User Headers Includes
#include "Weapon.h"

class Character
{
private:
protected:
	//inherited fields
	std::string name;
	int level, exp, health;
	int stg, def, cha, cla;

	Weapon* rightHand; //offensive

	//inherited methods
	virtual void takeDamage(int amount);

public:
	Character() = default; // So we don't have to write it in .cpp (?)
	Character(std::string name);
	Character(std::string name, int health);
	Character(std::string name, int health, int level, int exp, int stg, int def, int cha, int cla);
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

