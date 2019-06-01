// Compile for TI89 Titanium in the form of .89z files
#define USE_TI89

#include <tigcclib.h>

void _main() {
    // Clear screen
    clrscr();

    // Print Hello world!
    printf("Hello world");

    // Standby and wait for user input
    ngetchx();
}