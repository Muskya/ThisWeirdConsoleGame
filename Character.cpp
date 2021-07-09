#include "Character.h"

#include <iostream>
#include <string>

using namespace std;

//static member can't be initialized in class
int Character::nbChar = 0;

Character::Character(string name) : _name(name), _health(100), _level(0),
_exp(0), _rightHand(new Weapon("Fist", 9999, 10))
{
	nbChar++;
}
Character::Character(string name, int health) : _name(name),
_health(health), _level(0), _exp(0), _rightHand(new Weapon
("Fist", 9999, 10))
{
	nbChar++;
}
Character::~Character() {
	nbChar--;
	//deletes all pointers from this class first
	delete _rightHand;
}

void Character::attack(Character* target) {
	cout << this->_name << " attacks " << target->_name << endl;
	int dmg = this->getRightHand()->getDamage();
	target->takeDamage(dmg);
}

void Character::takeDamage(int amount) {
	this->_health -= amount;
}

void Character::changeWeapon(Weapon* weap) {
	this->_rightHand = weap; //changes this weapon ptr to new weapon ptr
}

void Character::status() {
	cout << "\n";
	cout << "Name: " << this->_name << endl;
	cout << "Health: " << this->_health << endl;
	cout << "Class: None" << endl;
	cout << "Right hand: " << this->_rightHand->getName() << endl;
	cout << "\n";
}
bool Character::isDead() const {
	return (this->_health <= 0);
}

int Character::getHealth() {
	return _health;
}

//returns a pointers to our right hand weap
Weapon* Character::getRightHand() {
	return this->_rightHand;
}