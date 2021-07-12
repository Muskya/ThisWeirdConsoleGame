#ifndef SERIALIZATION_H
#define SERIALIZATION_H

// C Standard Library Includes
#include <iostream>
#include <fstream> // File I/O
#include <time.h> // Time

// User Headers Includes
#include "Character.h"
#include "Sequence.h"

class Serialization {
private:
	
public:
	bool saveExists = false;

	inline static void Save(std::wstring path, Character* character) {
		//std::string lastSequenceDone = Sequence::getLastSequenceDone();
		std::ofstream savefile(path); // Opens a file output stream from the passed path

		// Fetching date and time
		std::time_t time = std::time(0); // stores time as a time_t object.
		char locale_time[26]; // char instead of string because of ctime_s parameters requirements.
		ctime_s(locale_time, sizeof locale_time, &time);

		if (!savefile) {
			std::cout << "Couldn't open savefile.txt" << std::endl;
		}
		else {
			savefile << locale_time;
			//savefile << lastSequenceDone;
		}
	}

	inline static void Load(std::wstring path) {
		std::ifstream loadfile(path);
	}
};

#endif
