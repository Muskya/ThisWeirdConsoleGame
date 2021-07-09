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
	std::string _name;
	int _health, _level, _exp;
	Weapon* _rightHand; //offensive

	//inherited methods
	virtual void takeDamage(int amount);

public:
	//static members
	static int nbChar;

	//constructors/destructors/logic
	Character(std::string name);
	Character(std::string name, int health);
	virtual ~Character();

	//character's actions
	void attack(Character* target);
	void changeWeapon(Weapon* weap);

	//relative to objetct's status
	bool isDead() const;
	virtual void status();

	//getters setters
	int getHealth();
	virtual Weapon* getRightHand();
};

#endif

