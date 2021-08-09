#ifndef SERIALIZATION_H
#define SERIALIZATION_H

// C++/C Standard Library Includes
#include <iostream>
#include <fstream> // File I/O
#include <time.h> // Time

// User Headers Includes
#include "Character.h"
#include "Sequence.h"
#include "Inventory.h"

class Serialization {
private:
	inline static bool isFileEmpty(std::wstring path, std::ofstream& savefile) {
		savefile.seekp(0, std::ios::end); // Goes to file's last position
		int pos = (int)savefile.tellp(); // Fetches current position
		if (pos == 0) // If it's 0, file is empty.
			return true;
		return false;
	}
public:
	static bool saveExists;

	inline static void Save(std::wstring path, Character* character) {
		std::ofstream savefile(path); // Opens a file output stream from the passed path
									  // ProjectDir (Microsoft) -> savefile.txt

		// Fetching date and time
		std::time_t time = std::time(0); // stores time as a time_t object.
		char locale_time[26]; // char instead of string because of ctime_s() parameters requirements.
		ctime_s(locale_time, sizeof locale_time, &time);

		if (!savefile) {
			std::cout << "Couldn't open savefile" << std::endl;
		}
		else {
			savefile << locale_time;
			savefile << "Character name: " << character->getName() << std::endl;
			savefile << "Character level: " << character->getLevel() << std::endl;
			savefile << "Experience points: " << character->getExp() << std::endl;
			savefile << "Slots used in inventory: " <<
				Inventory::GetInstance()->GetItems().size() << " /16" << std::endl;
			// 16-sized inventory will changed in the future. Will have to modify here.
		}
	}

	inline static void Load(std::wstring path) {
		std::ifstream loadfile(path);
	}
};

#endif
