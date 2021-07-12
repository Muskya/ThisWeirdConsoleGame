#include "Weapon.h"
#include <string>
#include <iostream>

using namespace std;

int Weapon::weapNb = 0; //static nb of weapon instanciated

Weapon::Weapon() : _name("none"), _durability(0), _damage(0) {

}

Weapon::Weapon(string name, int durability, int damage) : _name(name),
_durability(durability), _damage(damage)
{
	weapNb++;
}

Weapon::~Weapon() {
	weapNb--;
}

void Weapon::status() const {
	cout << "Weapon's information:" << endl;
	cout << "Name: " << this->_name << endl;
	cout << "Durability: " << this->_durability << endl;
	cout << "Damage: " << this->_damage << endl;
	cout << "\n";
}
bool Weapon::isBroken() const {
	return (this->_durability <= 0);
}

string Weapon::getName() const {
	return this->_name;
}
int Weapon::getDurability() const {
	return this->_durability;
}
int Weapon::getDamage() const {
	return this->_damage;
}