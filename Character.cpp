#include "Character.h"

#include <iostream>
#include <string>

using namespace std;

Character::Character(std::string name, int health, int level,
	int exp, int stg, int def, int cha, int cla)
	: name(name), health(health), level(level), exp(exp), stg(stg), def(def), cha(cha), cla(cla), rightHand(0) {

}
Character::~Character() {
	//deletes all pointers from this class first
	delete rightHand;
}

void Character::attack(Character* target) {
	cout << this->name << " attacks " << target->name << endl;
	int dmg = this->getRightHand()->getDamage();
	target->takeDamage(dmg);
}

void Character::takeDamage(int amount) {
	this->health -= amount;
}

void Character::changeWeapon(Weapon* weap) {
	this->rightHand = weap; //changes this weapon ptr to new weapon ptr
}

void Character::status() {
	cout << "\n";
	cout << "Name: " << this->name << endl;
	cout << "Health: " << this->health << endl;
	cout << "Class: None" << endl;
	cout << "Right hand: " << this->rightHand->getName() << endl;
	cout << "\n";
}
bool Character::isDead() const { return (this->health <= 0); }

// Accessors / Mutators
std::string Character::getName() { return name; }
int Character::getHealth() { return health; }
int Character::getLevel() { return level; }
int Character::getExp() { return exp; }
int Character::getStg() { return stg; }
int Character::getDef() { return def; }
int Character::getCha() { return cha; }
int Character::getCla() { return cla; }
Weapon* Character::getRightHand() { return rightHand; }