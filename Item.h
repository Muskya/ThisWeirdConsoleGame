#ifndef ITEM_H
#define ITEM_H

// C Standard Library Include
#include <string>

enum class Type { Equipment, Consumable, Key, Material } ;

class Item
{
private:
	std::string name;
	std::string description;

	Type type;
protected:
	void showItem() const;
public:
	Item(std::string name, Type type);
	virtual ~Item();

	inline std::string getName() const { return name; }
	inline Type getType() const { return type; }
};

#endif