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
    static void SuspenseDoubleBeep() {
        Beep(Z3, T2); // Frequency, Duration
        Beep(Z1, T2); 
    }

    static void DuelStartBeep() {

    }

    static void DuelThemeBeep() {
        Beep(220, 300);
        Beep(294, 300);
        Beep(294, 300);
        Beep(370, 300);
        Beep(494, 300);
        Beep(370, 300);
        Beep(440, 800);
        /* */
        Beep(440, 300);
        Beep(494, 300);
        Beep(440, 300);
        Beep(370, 300);
        Beep(392, 300);
        Beep(370, 300);
        Beep(330, 800);
        /* */
        Beep(247, 300);
        Beep(330, 300);
        Beep(330, 300);
        Beep(370, 300);
        Beep(555, 300);
        Beep(555, 300);
        Beep(494, 300);
        Beep(440, 300);
        Beep(392, 800);
        Beep(392, 300);
        Beep(370, 300);
        Beep(247, 800);
        Beep(278, 300);
        Beep(294, 300);
        Beep(330, 2600);
        /* */
        Beep(220, 300);
        Beep(294, 300);
        Beep(294, 300);
        Beep(370, 300);
        Beep(494, 300);
        Beep(370, 300);
        Beep(440, 800);
        /* */
        Beep(440, 300);
        Beep(494, 300);
        Beep(440, 300);
        Beep(370, 300);
        Beep(392, 300);
        Beep(370, 300);
        Beep(330, 800);
        /* */

        Beep(247, 300);

        Beep(330, 300);

        Beep(330, 300);

        Beep(370, 300);

        Beep(555, 300);

        Beep(555, 300);

        Beep(494, 300);

        Beep(440, 300);

        Beep(392, 800);

        Beep(392, 300);

        Beep(370, 300);

        Beep(278, 600);

        Beep(330, 600);

        Beep(294, 2600);

        /*Reff : */

        Beep(494, 300);

        Beep(494, 300);

        Beep(494, 300);

        Beep(440, 300);

        Beep(392, 200);

        Beep(440, 200);

        Beep(494, 200);

        Beep(440, 800);

        Beep(330, 300);

        Beep(370, 300);

        Beep(416, 300);

        Beep(330, 300);

        Beep(440, 2000);

        /* */

        Beep(494, 800);

        Beep(440, 800);

        Beep(392, 1600);

        /* */

        Beep(555, 300);

        Beep(555, 300);

        Beep(555, 300);

        Beep(494, 300);

        Beep(440, 300);

        Beep(494, 300);

        Beep(440, 300);

        Beep(392, 1400);

        /* */

        Beep(440, 300);

        Beep(494, 300);

        Beep(370, 1100);

        Beep(330, 300);

        Beep(294, 1800);

        /* */

        Beep(494, 800);

        Beep(440, 800);

        Beep(392, 1600);

        /* */

        Beep(555, 300);

        Beep(555, 300);

        Beep(555, 300);

        Beep(494, 300);

        Beep(440, 300);

        Beep(494, 300);

        Beep(440, 300);

        Beep(392, 1400);

        /* */

        Beep(440, 300);

        Beep(494, 300);

        Beep(370, 1100);

        Beep(330, 300);

        Beep(294, 1800);

    }
};


#endif