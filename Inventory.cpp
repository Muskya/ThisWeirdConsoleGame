#include "Inventory.h"

Inventory* Inventory::inventory = nullptr;

Inventory::Inventory(uint8_t size) : size(size)
{}

Inventory *Inventory::GetInstance() {
	if (inventory == nullptr) {
		inventory = new Inventory(10);
	}
	return inventory;
}

void Inventory::addItem(Item* item) {
	items.push_back(item);
}

void Inventory::removeItem(Item* item) {
	// auto == std::vector<Item *>::iterator it
	for (auto it = items.begin(); it != items.end(); it++) {
		if (*it == item)
			items.erase(it);
	}
}

void Inventory::useItem(Item* item) {

}

void Inventory::showInventory() {
	for (int i = 0; i < items.size(); i++) {
		std::cout << i << ") " << items[i]->getName() << std::endl;
	}
}