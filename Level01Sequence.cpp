#include "Level01Sequence.h"
using namespace std;

Level01Sequence::Level01Sequence() : sequenceName("Level_01") {

}
Level01Sequence::~Level01Sequence() {}

void Level01Sequence::start(Character* character) {
	

	cout << ". . . . . ." << endl;
	BeepMusic::SuspenseDoubleBeep();
	system("pause");

	cout << ". . . . . . . . . . . ." << endl;
	BeepMusic::SuspenseDoubleBeep();
	system("pause");
	cout << "\nHello ?..." << endl;

	system("exit");
}