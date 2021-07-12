#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
private:

protected:
	std::string _name;
	int _durability;
	int _damage;
public:
	static int weapNb;

	Weapon();
	Weapon(std::string name, int durability, int damage);
	virtual ~Weapon();

	void status() const; //basic weapon's infos
	bool isBroken() const; // if dura <= 0

	//accessers
	std::string getName() const;
	int getDurability() const;
	int getDamage() const;
};

#endif 