#include <string.h>
#include <stdio.h>

#define text "LinuxDistro"
const char* str = "2026" ;
int main() {
    printf("DISTRO:%s\nRDATE: %s\nSTRLEN: %ld\nSIZEOF: %ld", text, str, strlen(text), sizeof(text));
    return 0;
}