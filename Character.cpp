#include "Character.h"

#include <iostream>
#include <string>

using namespace std;

//static member can't be initialized in class
int Character::nbChar = 0;


Character::~Character() {
	nbChar--;
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
bool Character::isDead() const {
	return (this->health <= 0);
}

int Character::getHealth() {
	return health;
}

//returns a pointers to our right hand weap
Weapon* Character::getRightHand() {
	return this->rightHand;
}