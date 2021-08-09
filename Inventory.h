#ifndef INVENTORY_H
#define INVENTORY_H

// C Standard Library Includes
#include <vector>
#include <string>
#include <iostream>

// User-defined includes
#include "Item.h"

// SINGLETON CLASS
class Inventory 
{
private:
	Inventory(uint8_t size); // Private constructor (Singleton)
	std::vector<Item*> items;

	uint8_t size;
protected:
	static Inventory* inventory;
public:
	Inventory(Inventory& inv) = delete; // Should not be cloneable
	void operator=(const Inventory&) = delete; // Should not be assignable

	/* This is the static method that controls the access to the singleton
	 * instance. On the first run, it creates a singleton object and places it
	 * into the static field. On subsequent runs, it returns the client existing
	 * object stored in the static field. */
	static Inventory* GetInstance();

	void addItem(Item* item);
	void removeItem(Item* item);
	void useItem(Item* item);
	void showInventory();
};

#endif