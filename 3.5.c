#include <string.h>
#include <stdio.h>
#include <ctype.h>


int main() {
    char sim;
    scanf("%c", &sim);
    printf("CODE_DEC: %d \nCODE_HEX: %x\nCODE_OCT: %o\nUPPER: %c\nNEXT: %c\nPREV: %c", sim, sim, sim, toupper(sim), sim + 1, sim - 1);
    return 0;
}