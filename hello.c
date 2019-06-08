// Compile for TI89 (.89z file), TI92+ (.9xz), and TI-V200 (.v2z)
#define USE_TI89
#define USE_TI92P
#define USE_V200

#include <tigcclib.h>

void _main() {
    // Clear screen
    clrscr();

    // Print Hello world!
    printf("Hello world");

    // Standby and wait for user input
    ngetchx();
}

