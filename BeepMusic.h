#ifndef BEEPMUSIC_H
#define BEEPMUSIC_H

#include <windows.h>
#include <stdio.h>

#pragma region HZ & MS
#define T32 3200
#define T16 1600
#define T12 1200
#define T8 800
#define T6 600
#define T4 400
#define T2 200
#define T1 100
#define Z1 262
#define Z2 294
#define Z3 330
#define Z4 350
#define Z5 393
#define Z6 441
#define Z7 495
#define G1 525
#define G2 589
#define G3 661
#define G4 700
#define G5 786
#define G6 882
#define G7 990
#pragma endregion

class BeepMusic {
public:
    // Example Music Loop
	static void ExamplePlay() {
        int i = 0;
        while (i++ < 2) {
            //1
            Beep(Z6, T8);
            Beep(Z6, T6);
            Beep(Z5, T2);
            Beep(Z6, T4);
            Beep(Z5, T4);
            Beep(Z3, T8);
            //2
            Beep(Z5, T4);
            Beep(Z3, T4);
            Beep(Z3, T8);
            Beep(Z3, T16);
            //3
            Beep(Z2, T8);
            Beep(Z2, T6);
            Beep(Z1, T2);
            Beep(Z2, T4);
            Beep(Z2, T4);
            Beep(Z5, T8);
        }
	}
};


#endif