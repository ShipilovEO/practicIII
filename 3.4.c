#include <string.h>
#include <stdio.h>


int main() {
    char str[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";
    printf("%s", str);
    printf("STRLEN: %ld\n", strlen(str) - 1);
    printf("SIZEOF: %ld", sizeof(str) - 1);
    return 0;
}